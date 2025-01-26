/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:04:11 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 11:35:48 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strdup_test.h"

int	ft_strdup_empty_test(void)
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
		if (!dest)
			free(dest);
		return (-1);
	}
}
