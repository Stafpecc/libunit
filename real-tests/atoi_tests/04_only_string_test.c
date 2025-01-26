/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_only_string_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:22:45 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:11:13 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"

int	ft_atoi_only_string_test(void)
{
	if (ft_atoi("Hello World") == 0)
		return (0);
	else
		return (-1);
}
