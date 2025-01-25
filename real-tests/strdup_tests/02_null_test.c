/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:52:09 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 15:33:22 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

int	ft_strdup_null_test(void)
{
	char	*dest;
	
	dest = ft_strdup(NULL);
	if (dest && ft_strcmp(dest, "(null)") == 0)
	{
		free(dest);
		return (0);
	}
	else
	{
		free(dest);
		return (-1);
	}
}
