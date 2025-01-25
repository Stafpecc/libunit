/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:14:37 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 19:29:59 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../framework/incs/libunit.h"
#include "../../incs/strlen_tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test", "STRLEN", &ft_strlen_basic_test);
	load_test(&testlist, "Empty test", "STRLEN", &ft_strlen_empty_test);
	load_test(&testlist, "Bigger string test", "STRLEN", &ft_strlen_bigger_str_test);
	load_test(&testlist, "One char test", "STRLEN", &ft_strlen_one_char_test);
	load_test(&testlist, "Null char in string test", "STRLEN", \
				&ft_strlen_null_char_in_str_test);
	return (launch_tests(&testlist));
}
