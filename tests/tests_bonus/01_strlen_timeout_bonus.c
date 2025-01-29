/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_timeout_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:33:13 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 18:45:35 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/strlen_tests_bonus.h"
#include "../../framework/incs/libft.h"

int	ft_strlen_timeout_test(void)
{
	if (ft_strlen_timeout("Hello") == 5)
		return (0);
	else
		return (-1);
}
