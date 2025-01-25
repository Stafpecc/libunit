
#include "../incs/libunit.h"

void	load_test(t_unit_test **test, char *name, int (*f)(void))
{
	t_unit_test *Cpy;
	t_unit_test *new;

	if (*test == NULL)
	{
		new = malloc(sizeof(t_unit_test));
		if (new == NULL)
			return ;
		new->name = name;
		new->f = f;
		new->next = NULL;
		*test = new;
		return ;
	}
	Cpy = *test;
	while (Cpy->next != NULL)
		Cpy = Cpy->next;
	new = malloc(sizeof(t_unit_test));
	if (new == NULL)
		return ;
	new->name = name;
	new->f = f;
	new->next = NULL;

	Cpy->next = new;
}
