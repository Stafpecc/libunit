/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:04:11 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 15:34:56 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

int	ft_strdup_null_test(void)
{
	char	*dest;
	
	dest = ft_strdup("");
	if (dest && ft_strcmp(dest, "") == 0)
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
