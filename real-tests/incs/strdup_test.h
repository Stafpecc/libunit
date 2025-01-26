/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:40:42 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 01:24:51 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRDUP_TEST_H
# define STRDUP_TEST_H

# include "libunit.h"
# include "libft.h"
# include <string.h>

int	strdup_launcher(void);
int	ft_strdup_basic_test(void);
int	ft_strdup_empty_test(void);
int	ft_strdup_bigger_test(void);
int	ft_strdup_one_char_test(void);
int	ft_strdup_null_test(void);

#endif