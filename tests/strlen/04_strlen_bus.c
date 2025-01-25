/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlen_bus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:20:51 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:05:29 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../../framework/incs/libft.h"

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

int	ft_strlen_bus_test(void)
{
	if (ft_strlen_buserror("Hello") == 5)
		return (0);
	else
		return (-1);
}
