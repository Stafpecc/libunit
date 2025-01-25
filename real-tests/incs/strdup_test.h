/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:40:42 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:05:31 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRDUP_TESTS_H
# define STRDUP_TESTS_H

# include "../../framework/incs/libunit.h"
# include "libft.h"
# include <string.h>

int	strdup_launcher(void);
int	ft_strdup_basic_test(void);
int	ft_strdup_empty_test(void);
int	ft_strdup_bigger_test(void);
int	ft_strdup_one_char_test(void);
int	ft_strdup_null_test(void);

#endif