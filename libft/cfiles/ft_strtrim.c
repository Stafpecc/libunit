/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:57:33 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:05:30 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	char			*result;
	size_t			end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[start], end - start + 1);
	return (result);
}
