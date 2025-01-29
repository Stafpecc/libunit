/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_strjoin_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:59:51 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 18:45:35 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/strjoin_tests_bonus.h"
#include "../../framework/incs_bonus/libunit_bonus.h"

int	strjoin_launcher_bonus(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test_bonus(&testlist, "Basic test", "STRJOIN", \
				&ft_strjoin_basic_test);
	load_test_bonus(&testlist, "Empty test", "STRJOIN", \
				&ft_strjoin_empty_test);
	load_test_bonus(&testlist, "Bigger string test", "STRJOIN", \
				&ft_strjoin_bigger_test);
	load_test_bonus(&testlist, "One char test", "STRJOIN", \
				&ft_strjoin_one_char_test);
	load_test_bonus(&testlist, "Null char in string test", "STRJOIN", \
				&ft_strjoin_null_test);
	return (launch_test_bonus(&testlist));
}
