/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_tests_bonus.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:53:14 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 18:45:35 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_TESTS_BONUS_H
# define ATOI_TESTS_BONUS_H

# include "../../framework/incs_bonus/libunit_bonus.h"
# include "libft.h"
# include <string.h>

int	atoi_launcher_bonus(void);
int	ft_atoi_basic_test(void);
int	ft_atoi_negative_test(void);
int	ft_atoi_multiple_sign_test(void);
int	ft_atoi_only_string_test(void);
int	ft_atoi_int_min_test(void);

#endif