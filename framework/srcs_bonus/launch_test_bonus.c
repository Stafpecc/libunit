/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:29:03 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 18:49:30 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/libunit_bonus.h"
#include "../incs/libft.h"
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define TIMEOUT 5

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

static void	print_signal(t_unit_test *tmp, int status)
{
	if (WTERMSIG(status) == SIGILL)
		ft_printf("%s : %s : " YELLOW "[SIGILL]" RESET "\n", \
			tmp->function, tmp->name);
	else if (WTERMSIG(status) == SIGALRM)
		ft_printf("%s : %s : " YELLOW "[TIMEOUT]" RESET "\n", \
			tmp->function, tmp->name);
	else if (WTERMSIG(status) == SIGABRT)
		ft_printf("%s : %s : " YELLOW "[SIGABORT]" RESET "\n", \
			tmp->function, tmp->name);
	else if (WTERMSIG(status) == SIGPIPE)
		ft_printf("%s : %s : " YELLOW "[SIGPIPE]" RESET "\n", \
			tmp->function, tmp->name);
	else if (WTERMSIG(status) == SIGFPE)
		ft_printf("%s : %s : " YELLOW "[SIGFPE]" RESET "\n", \
			tmp->function, tmp->name);
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
		print_signal(tmp, status);
	return (success_test);
}

static void	ft_pid(t_unit_test **test, int pid, t_unit_test *tmp, int status)
{
	if (pid == -1)
	{
		free_list(test);
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		alarm(TIMEOUT);
		status = tmp->f();
		if (status == -1)
			status = 1;
		free_list(test);
		exit(status);
	}
}

int	launch_test_bonus(t_unit_test **test)
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
		if (pid == -1 || pid == 0)
			ft_pid(test, pid, tmp, status);
		else
			success_test = print_result(status, tmp, success_test);
		total_test++;
		tmp = tmp->next;
	}
	ft_printf("%d/%d tests checked\n\n", success_test, total_test);
	return (free_list(test), status);
}
