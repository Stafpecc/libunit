/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_int_min_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:24:31 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:05:28 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/atoi_tests.h"

int	ft_atoi_int_min_test(void)
{
	if (ft_atoi("  -2147483648iuyi") == -2147483648)
		return (0);
	else
		return (-1);
}
