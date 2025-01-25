/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:45:30 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 17:40:25 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		free(result);
		return (-1);
	}
}
