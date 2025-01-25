/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:04:11 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 17:40:46 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strjoin_empty_test(void)
{
	char	*result;

	result = ft_strjoin("", "");
	if (result && ft_strcmp(result, "") == 0)
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
