/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:45:30 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 11:34:17 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strjoin_tests.h"

int	ft_strjoin_basic_test(void)
{
	char	*result;

	result = ft_strjoin("Hello", "Coucou");
	if (result && ft_strcmp(result, "HelloCoucou") == 0)
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
