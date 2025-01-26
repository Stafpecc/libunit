/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:29:03 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 15:46:30 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libunit.h"
#include "../incs/libft.h"
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

static void	free_list(t_unit_test **test)
{
	t_unit_test	*cpy;

	if (!test || !(*test))
		return ;
	while (*test != NULL)
	{
		cpy = *test;
		*test = cpy->next;
		free(cpy);
	}
	*test = NULL;
}

static void	fail_pid(t_unit_test **test)
{
	write(2, "Fork failed\n", 12);
	free_list(test);
	exit(EXIT_FAILURE);
}

static void	success_pid(int status, t_unit_test *tmp, t_unit_test **test)
{
	status = tmp->f();
	if (status == -1)
		status = 1;
	free_list(test);
	exit(status);
}

static int	print_result(int status, t_unit_test *tmp, int success_test)
{
	wait(&status);
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ft_printf("%s : %s : " GREEN "[OK]" RESET "\n", tmp->function, \
				tmp->name);
			success_test++;
		}
		else if (WEXITSTATUS(status) == 1 || WEXITSTATUS(status) == -1)
			ft_printf("%s : %s : " RED "[KO]" RESET "\n", tmp->function, \
				tmp->name);
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ft_printf("%s : %s : " YELLOW "[SIGSEGV]" RESET "\n", \
				tmp->function, tmp->name);
		else if (WTERMSIG(status) == SIGBUS)
			ft_printf("%s : %s : " YELLOW "[SIGBUS]" RESET "\n", \
				tmp->function, tmp->name);
	}
	return (success_test);
}

int	launch_test(t_unit_test **test)
{
	t_unit_test	*tmp;
	pid_t		pid;
	int			status;
	int			success_test;
	int			total_test;

	success_test = 0;
	total_test = 0;
	status = 0;
	tmp = *test;
	while (tmp)
	{
		pid = fork();
		if (pid == -1)
			fail_pid(test);
		if (pid == 0)
			success_pid(status, tmp, test);
		else
			success_test = print_result(status, tmp, success_test);
		total_test++;
		tmp = tmp->next;
	}
	ft_printf("%d/%d tests checked\n\n", success_test, total_test);
	free_list(test);
	return (status);
}
