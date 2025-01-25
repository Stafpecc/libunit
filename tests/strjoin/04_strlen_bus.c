// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   strjoin_bus.c                                      :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: icasalfichet <icasalfichet@student.42lyon.fr>      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/01/25 14:20:51 by tarini            #+#    #+#             */
// /*   Updated: 2025/01/25 14:43:02 by icasal         ###   ########lyon.fr   */
// /*                                                                            */
// /* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#if defined(__GNUC__)
# if defined(__i386__)

size_t	ft_strlen(char const *str)
{
	size_t	ret;
	char	*cptr;

	ret = 0;
	__asm__("pushf\norl $0x40000,(%esp)\npopf");
	cptr = malloc(sizeof(char) + 1);
	cptr = (char *)++str;
	while (cptr[ret] != '\0')
	{
		ret++;
	}
	return (ret);
}
# elif defined(__x86_64__)

size_t	ft_strlen(char const *str)
{
	size_t	ret;
	char	*cptr;

	ret = 0;
	__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	cptr = malloc(sizeof(char) + 1);
	cptr = (char *)++str;
	while (cptr[ret] != '\0')
	{
		ret++;
	}
	return (ret);
}

# endif
#endif

int	main(void)
{
	char *test = "Bonjour";
	printf("%zu\n", ft_strlen(test));
}