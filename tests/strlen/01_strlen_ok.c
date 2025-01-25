/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_ok.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:15:18 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 23:000:01 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

int	ft_strlen_ok(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i++])
		;
	return (i - 1);
}

int	ft_strlen_basic_test(void)
{
	if (ft_strlen_ok("Hello") == 5)
		return (0);
	else
		return (-1);
}
