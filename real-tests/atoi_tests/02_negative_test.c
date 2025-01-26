/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_negative_nb_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:06:33 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:11:19 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"

int	ft_atoi_negative_test(void)
{
	if (ft_atoi(" -27He45llo") == -27)
		return (0);
	else
		return (-1);
}
