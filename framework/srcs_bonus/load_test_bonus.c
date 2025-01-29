/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:25:49 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 19:04:06 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/libunit_bonus.h"

void	load_test_bonus(t_unit_test **test, char *name, char *func, \
		int (*f)(void))
{
	t_unit_test	*cpy;
	t_unit_test	*new;

	new = malloc(sizeof(t_unit_test));
	if (new == NULL)
		return ;
	if (*test == NULL)
	{
		new->name = name;
		new->function = func;
		new->f = f;
		new->next = NULL;
		*test = new;
		return ;
	}
	cpy = *test;
	while (cpy->next != NULL)
		cpy = cpy->next;
	new->name = name;
	new->function = func;
	new->f = f;
	new->next = NULL;
	cpy->next = new;
}
