/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_one_char_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:52:14 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:12:07 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_tests.h"

int	ft_strlen_one_char_test(void)
{
	if (ft_strlen("A") == 1)
		return (0);
	else
		return (-1);
}
