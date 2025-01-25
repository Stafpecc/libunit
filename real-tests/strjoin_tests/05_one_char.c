/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_one_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:04:17 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 15:34:23 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

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
		free(result);
		return (-1);
	}
}
