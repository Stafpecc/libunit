/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_ko.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:16:25 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 14:39:55 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/incs/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i++ < len1)
		result[i] = s1[i];
	j = 0;
	while (j++ < len2)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}