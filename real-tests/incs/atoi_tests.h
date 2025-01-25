/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:53:14 by tarini            #+#    #+#             */
/*   Updated: 2025/01/25 20:36:33 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_TESTS_H
# define ATOI_TESTS_H

# include <string.h>

int	atoi_launcher(void);
int	ft_atoi_basic_test(void);
int	ft_atoi_negative_nb_test(void);
int	ft_atoi_multiple_sign_test(void);
int	ft_atoi_only_string_test(void);
int	ft_atoi_int_min_str_test(void);

#endif