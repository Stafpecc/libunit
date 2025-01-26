/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_one_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:04:17 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 11:35:52 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strdup_test.h"

int	ft_strdup_one_char_test(void)
{
	char	*dest;

	dest = ft_strdup("0");
	if (dest && ft_strcmp(dest, "0") == 0)
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
