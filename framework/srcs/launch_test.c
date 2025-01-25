/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:29:03 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 20:28:26 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libunit.h"
#include <unistd.h>
#include <sys/wait.h>

void	free_list(t_unit_test **test)
{
	t_unit_test	*cpy;

	while (*test != NULL)
	{
		cpy = *test;
		*test = cpy->next;
		free(cpy->name);
		free(cpy);
	}
}

void launch_test(t_unit_test **test)
{
	t_unit_test	*tmp;
	pid_t		pid;
	int			status;

	tmp = *test;
	while (tmp)
	{
		pid = fork();
		if (pid == -1)
		{
			write(2, "Fork failed\n", 12);
			free_list(tmp);
			exit(EXIT_FAILURE);
		}
		if (pid == 0) // on est dans le processus fils
		{
			if (tmp->f() == 0)
				exit(EXIT_SUCCESS);
			else
				exit(EXIT_FAILURE);
			//exit(tmp->f() == 0)
			// voir si on ecrit au fur et a mesure ou on stocke le resultat dans la liste
			// et on print tout a la fin
		}
		else //on est dans le processus parent
		{
			wait(&status);
			if (WIFEXITED(status))
			{
				if (WEXITSTATUS(status) == 0)
					ft_printf("%s : %s : [OK]\n", tmp->function, tmp->name);
				else if (WEXITSTATUS(status) == 1)
					ft_printf("%s : %s : [KO]\n", tmp->function, tmp->name);
			}
			else if (WIFSIGNALED(status))
			{
				if (WTERMSIG(status) == 11)
					ft_printf("%s : %s : [SIGSEV]\n", tmp->function, tmp->name);
				else if (WTERMSIG(status) == 7)
					ft_printf("%s : %s : [SIGBUS]\n", tmp->function, tmp->name);
			}
		}
	}
	free_list(tmp);
}
