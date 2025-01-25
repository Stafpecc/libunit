
#include "libunit.h"

//ajoute des tests a la liste chainee

void	load_test(t_unit_test **test, char *name, int (*f)(void))
{
	t_unit_test *Cpy = *test;
	t_unit_test *new;
	if (Cpy == NULL)
	{
		Cpy = malloc(sizeof(t_unit_test));
		if (Cpy == NULL)
			return ;
		Cpy->name = name;
		Cpy->f = f;
		Cpy->next = NULL;
		return ;
	}
	while (Cpy != NULL)
	{
		Cpy = Cpy->next;
	}
	new = malloc(sizeof(t_unit_test));
	if (new == NULL)
		return ;
	new->name = name;
	new->f = f;
	new->next = NULL;
	Cpy->next = new;
}
