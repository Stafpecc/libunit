/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_char_in_str_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:09:02 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:05:29 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/strlen_tests.h"

int	ft_strlen_null_char_in_str_test(void)
{
	if (ft_strlen("IanIan\0Hello") == 6)
		return (0);
	else
		return (-1);
}
