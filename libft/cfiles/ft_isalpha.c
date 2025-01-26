/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:29:11 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:57:00 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
int main(void) {
	char test[] = {'A', 'z', '5', '!', ' ', 'G', 'm'};
	int i = -1;
	while (++i < 7) {
		if (ft_isalpha(test[i]))
			printf("'%c' letter.\n", test[i]);
		else
			printf("'%c' not a letter.\n", test[i]);
	}
	return 0;
}
*/
