/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:03:38 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:12:50 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "strjoin_tests.h"

int	strjoin_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test", "STRJOIN", &ft_strjoin_basic_test);
	load_test(&testlist, "Empty test", "STRJOIN", &ft_strjoin_empty_test);
	load_test(&testlist, "Bigger string test", "STRJOIN", \
				&ft_strjoin_bigger_test);
	load_test(&testlist, "One char test", "STRJOIN", &ft_strjoin_one_char_test);
	load_test(&testlist, "Null char in string test", "STRJOIN", \
				&ft_strjoin_null_test);
	return (launch_test(&testlist));
}
