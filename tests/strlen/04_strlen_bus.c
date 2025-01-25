/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlen_bus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:20:51 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 20:31:07 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#if defined(__GNUC__)
# if defined(__i386__)

size_t	ft_strlen_buserror(char const *str)
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

size_t	ft_strlen_buserror(char const *str)
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
