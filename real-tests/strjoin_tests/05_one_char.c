/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_one_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:04:17 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 11:35:13 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strjoin_tests.h"

int	ft_strjoin_one_char_test(void)
{
	char	*result;

	result = ft_strjoin("4", "2");
	if (result && ft_strcmp(result, "42") == 0)
	{
		free(result);
		return (0);
	}
	else
	{
		if (!result)
			free(result);
		return (-1);
	}
}
