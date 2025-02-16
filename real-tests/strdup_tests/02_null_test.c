/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:52:09 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 19:04:06 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strdup_tests.h"

int	ft_strdup_null_test(void)
{
	char	*dest;

	dest = ft_strdup(NULL);
	if (dest == NULL)
	{
		return (0);
	}
	else
	{
		free(dest);
		return (-1);
	}
}
