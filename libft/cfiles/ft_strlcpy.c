/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:47:49 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:05:30 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size == 0)
		return (s);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s);
}

/*#include <bsd/string.h>
#include <stdio.h>

int main() 
{
	char src[] = "coucou";
	char dest[12]; ft_memset(dest, 'A', 10);

	printf("    44     function   ==   %d \n", ft_strlcpy(dest, src, 1) 
		== ft_strlen(src) && dest[0] == 'A');
	printf("  origin   function   ==   %d \n", strlcpy(dest, src, 3) 
		== ft_strlen(src) && dest[0] == 'A');
	return (2); 
}
*/