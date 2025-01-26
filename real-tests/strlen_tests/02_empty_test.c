/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:14:42 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:11:55 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_tests.h"

int	ft_strlen_empty_test(void)
{
	if (ft_strlen("") == 0)
		return (0);
	else
		return (-1);
}
