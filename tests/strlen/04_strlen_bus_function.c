/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlen_bus_function.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:26:26 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 15:30:51 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

size_t	ft_strlen_buserror(char const *str)
{
	size_t	ret;
	char	*cptr;

	ret = 0;
	__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	cptr = malloc(sizeof(char) + 1);
	cptr = (char *)++str;
	while (cptr[ret] != '\0')
		ret++;
	return (ret);
}
