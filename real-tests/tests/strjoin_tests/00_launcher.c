/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:03:38 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 19:12:41 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../framework/incs/libunit.h"
#include "../../incs/strjoin_tests.h"

int	strjoin_launcher(void)
{
	t_unit_test	*testlist = NULL;
	
	load_test(&testlist, "Basic test", &ft_strjoin_basic_test);
	load_test(&testlist, "Empty test", &ft_strjoin_empty_test);
	load_test(&testlist, "Bigger string test", &ft_strjoin_bigger_test);
	load_test(&testlist, "One char test", &ft_strjoin_one_char_test);
	load_test(&testlist, "Null char in string test", \
				&ft_strjoin_null_test);

	return(launch_tests(&testlist));
}
