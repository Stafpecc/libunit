/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:26:13 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 17:39:59 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strdup_basic_test(void)
{
	char	*dest;

	dest = ft_strdup("coucou");
	if (dest && ft_strcmp(dest, "coucou") == 0)
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
