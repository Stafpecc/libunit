/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_tests.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:02:23 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 18:45:35 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRJOIN_TESTS_H
# define STRJOIN_TESTS_H

# include "../../framework/incs/libunit.h"
# include "libft.h"
# include <string.h>

int	strjoin_launcher(void);
int	ft_strjoin_basic_test(void);
int	ft_strjoin_empty_test(void);
int	ft_strjoin_bigger_test(void);
int	ft_strjoin_one_char_test(void);
int	ft_strjoin_null_test(void);

#endif