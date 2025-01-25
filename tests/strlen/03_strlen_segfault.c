/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_segfault.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:17:15 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:05:29 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../framework/incs/libft.h"

int	ft_strlen_segfault(char *str)
{
	int	i;

	i = 0;
	str = NULL;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_segfault_test(void)
{
	if (ft_strlen_segfault("Hello") == 5)
		return (0);
	else
		return (-1);
}
