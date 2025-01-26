/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:05:02 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 01:25:05 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "strdup_test.h"

int	strdup_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic test", "STRDUP", &ft_strdup_basic_test);
	load_test(&testlist, "Empty test", "STRDUP", &ft_strdup_empty_test);
	load_test(&testlist, "Bigger string test", "STRDUP", \
				&ft_strdup_bigger_test);
	load_test(&testlist, "One char test", "STRDUP", &ft_strdup_one_char_test);
	load_test(&testlist, "Null char in string test", "STRDUP", \
				&ft_strdup_null_test);
	return (launch_test(&testlist));
}
