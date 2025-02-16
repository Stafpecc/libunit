/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_ko.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:16:25 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 15:31:47 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/strlen_tests.h"
#include "../../framework/incs/libft.h"

int	ft_strlen_ko_test(void)
{
	if (ft_strlen_ko("Hello") == 5)
		return (0);
	else
		return (-1);
}
