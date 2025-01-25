/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_only_string_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:22:45 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:05:27 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/atoi_tests.h"

int	ft_atoi_only_string_test(void)
{
	if (ft_atoi("Hello World") == 0)
		return (0);
	else
		return (-1);
}
