/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:14:26 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:05:26 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	current_position;

	current_position = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		current_position++;
	}
	return (current_position);
}
