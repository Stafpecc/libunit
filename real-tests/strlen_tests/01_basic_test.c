/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:08:42 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 01:25:16 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_tests.h"

int	ft_strlen_basic_test(void)
{
	if (ft_strlen("Hello") == 5)
		return (0);
	else
		return (-1);
}
