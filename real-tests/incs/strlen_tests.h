/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:46:21 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 00:05:28 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_TESTS_H
# define STRLEN_TESTS_H

# include "../../framework/incs/libunit.h"
# include "libft.h"
# include <string.h>

int	strlen_launcher(void);
int	ft_strlen_basic_test(void);
int	ft_strlen_empty_test(void);
int	ft_strlen_bigger_str_test(void);
int	ft_strlen_one_char_test(void);
int	ft_strlen_null_char_in_str_test(void);

#endif
