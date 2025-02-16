/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:29:50 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 19:04:06 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../incs/strlen_tests.h"

int	strlen_launcher_test(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test OK", "STRLEN", &ft_strlen_basic_test);
	load_test(&testlist, "Error test KO", "STRLEN", &ft_strlen_ko_test);
	load_test(&testlist, "Segfault test", "STRLEN", \
				&ft_strlen_segfault_test);
	load_test(&testlist, "Bus error test", "STRLEN", &ft_strlen_bus_test);
	return (launch_test(&testlist));
}

	// load_test(&testlist, "Timeout test", "STRLEN", &ft_strlen_timeout_test);