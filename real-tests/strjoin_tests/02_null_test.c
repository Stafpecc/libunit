/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:52:09 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 11:34:45 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strjoin_tests.h"

int	ft_strjoin_null_test(void)
{
	char	*result;

	result = ft_strjoin(NULL, NULL);
	if (result == NULL)
	{
		return (0);
	}
	else
	{
		free(result);
		return (-1);
	}
}
