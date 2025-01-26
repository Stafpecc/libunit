/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_char_in_str_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:09:02 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:12:11 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_tests.h"

int	ft_strlen_null_char_in_str_test(void)
{
	if (ft_strlen("IanIan\0Hello") == 6)
		return (0);
	else
		return (-1);
}
