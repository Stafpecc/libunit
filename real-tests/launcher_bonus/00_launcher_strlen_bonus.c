/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_strlen_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:14:37 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 19:04:06 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/strlen_tests_bonus.h"
#include "../../framework/incs_bonus/libunit_bonus.h"

int	strlen_launcher_bonus(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test_bonus(&testlist, "Basic test", "STRLEN", &ft_strlen_basic_test);
	load_test_bonus(&testlist, "Empty test", "STRLEN", &ft_strlen_empty_test);
	load_test_bonus(&testlist, "Bigger string test", "STRLEN", \
				&ft_strlen_bigger_str_test);
	load_test_bonus(&testlist, "One char test", "STRLEN", \
				&ft_strlen_one_char_test);
	load_test_bonus(&testlist, "Null char in string test", "STRLEN", \
				&ft_strlen_null_char_in_str_test);
	return (launch_test_bonus(&testlist));
}
