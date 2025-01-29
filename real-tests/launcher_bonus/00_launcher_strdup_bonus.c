/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_strdup_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:58:27 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 18:45:35 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/strdup_tests_bonus.h"
#include "../../framework/incs_bonus/libunit_bonus.h"

int	strdup_launcher_bonus(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test_bonus(&testlist, "Basic test", "STRDUP", \
			&ft_strdup_basic_test);
	load_test_bonus(&testlist, "Empty test", "STRDUP", \
			&ft_strdup_empty_test);
	load_test_bonus(&testlist, "Bigger string test", "STRDUP", \
			&ft_strdup_bigger_test);
	load_test_bonus(&testlist, "One char test", "STRDUP", \
			&ft_strdup_one_char_test);
	load_test_bonus(&testlist, "Null char in string test", "STRDUP", \
				&ft_strdup_null_test);
	return (launch_test_bonus(&testlist));
}
