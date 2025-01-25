/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:56:43 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 21:53:34 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/incs/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct s_list	*current;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
