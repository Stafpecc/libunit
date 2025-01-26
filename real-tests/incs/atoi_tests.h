/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:53:14 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 00:13:26 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_TESTS_H
# define ATOI_TESTS_H

# include "../../framework/incs/libunit.h"
# include "libft.h"
# include <string.h>

int	atoi_launcher(void);
int	ft_atoi_basic_test(void);
int	ft_atoi_negative_test(void);
int	ft_atoi_multiple_sign_test(void);
int	ft_atoi_only_string_test(void);
int	ft_atoi_int_min_test(void);

#endif