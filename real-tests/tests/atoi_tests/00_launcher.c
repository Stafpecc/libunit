/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:10:24 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 19:12:40 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../framework/incs/libunit.h"
#include "../../incs/atoi_test.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist = NULL;
	
	load_test(&testlist, "Basic test", &ft_atoi_basic_test);
	load_test(&testlist, "Empty test", &ft_atoi_negative_nb_test);
	load_test(&testlist, "Bigger string test", &ft_atoi_multiple_sign_test);
	load_test(&testlist, "One char test", &ft_atoi_only_string_test);
	load_test(&testlist, "Null char in string test", \
				&ft_atoi_int_min_test);

	return(launch_tests(&testlist));
}
