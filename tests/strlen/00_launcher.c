/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:29:50 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/25 20:29:55 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../framework/incs/libunit.h"
#include "../../incs/strlen_tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test OK", "STRLEN", &ft_strlen_ok);
	load_test(&testlist, "Error test KO", "STRLEN", &fft_strlen_ko);
	load_test(&testlist, "Segfault test", "STRLEN", \
				&ft_strlen_segfault);
	load_test(&testlist, "Bus error test", "STRLEN", &ft_strlen_buserror);
	return (launch_tests(&testlist));
}