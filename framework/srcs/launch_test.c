
#include "libunit.h"
#include <unistd.h>
#include <sys/wait.h>

//lance l'exe de la liste chainee
void launch_test(t_unit_test **test)
{
	t_unit_test *tmp;
	pid_t		pid;
	int			status;

	tmp = *test;
	while (tmp)
	{
		pid = fork();
		if (pid == -1)
		{
			write(2, "Fork failed\n", 12);
			//exit(EXIT_FAILURE);
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

		}
	}
}
