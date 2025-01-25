/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_bus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icasalfichet <icasalfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:20:51 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 14:43:02 by icasal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "../framework/incs/libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*result;
	int		bus_error[2];

	if (!s1 || !s2)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = (char *)(&bus_error[1] + 1);
//	result = malloc(sizeof(char) * 1);
	if (!result)
		return (NULL);
	i = -1;
	while (++i < len1)
		result[i] = s1[i];
	j = -1;
	while (++j < len2)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}

char    *ft_strupcase(char *str)
{
    while (*str)
    {
        if ((*str >= 'a') && (*str <= 'z'))
            *str = *str - 32;
		str++;
    }
    return (str);
}

int main(void) {
//	char *s1 = "coucou";
//	char *s2 = "bonjour";
//	printf("%s\n", ft_strjoin("coucou", "bonjour"));
//	ft_strupcase("bonjouRRRR");
//	printf("%s\n", ft_strupcase("bonjour"));
	char *bus_error = 0;
	*bus_error = 'X';
	return 0;
}