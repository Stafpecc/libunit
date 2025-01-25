/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:05:02 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 19:12:41 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../framework/incs/libunit.h"
#include "../../incs/strdup_test.h"

int	strdup_launcher(void)
{
	t_unit_test	*testlist = NULL;
	
	load_test(&testlist, "Basic test", &ft_strdup_basic_test);
	load_test(&testlist, "Empty test", &ft_strdup_empty_test);
	load_test(&testlist, "Bigger string test", &ft_strdup_bigger_test);
	load_test(&testlist, "One char test", &ft_strdup_one_char_test);
	load_test(&testlist, "Null char in string test", \
				&ft_strdup_null_test);

	return(launch_tests(&testlist));
}
