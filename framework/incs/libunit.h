/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:57:41 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 15:37:47 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# define TIMEOUT 5
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

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
