/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_multiple_sign_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:21:15 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:11:16 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"

int	ft_atoi_multiple_sign_test(void)
{
	if (ft_atoi(" --+27He45llo") == 0)
		return (0);
	else
		return (-1);
}
