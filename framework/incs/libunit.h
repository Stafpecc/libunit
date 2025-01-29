/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:57:41 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 19:04:06 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>

typedef struct s_unit_test
{
	char				*name;
	char				*function;
	int					(*f)(void);
	struct s_unit_test	*next;
}	t_unit_test;

int		launch_test(t_unit_test **test);
void	load_test(t_unit_test **test, char *name, char *func, \
					int (*f)(void));

#endif
