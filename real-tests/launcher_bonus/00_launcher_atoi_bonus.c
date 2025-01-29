/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_atoi_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:01:07 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 19:04:06 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/atoi_tests_bonus.h"
#include "../../framework/incs_bonus/libunit_bonus.h"

int	atoi_launcher_bonus(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test_bonus(&testlist, "Basic test", "ATOI", \
			&ft_atoi_basic_test);
	load_test_bonus(&testlist, "Empty test", "ATOI", \
			&ft_atoi_negative_test);
	load_test_bonus(&testlist, "Bigger string test", "ATOI", \
			&ft_atoi_multiple_sign_test);
	load_test_bonus(&testlist, "Only string test", "ATOI", \
			&ft_atoi_only_string_test);
	load_test_bonus(&testlist, "Null char in string test", "ATOI", \
				&ft_atoi_int_min_test);
	return (launch_test_bonus(&testlist));
}
