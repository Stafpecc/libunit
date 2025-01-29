/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tests_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:35:20 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 17:35:17 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_TESTS_BONUS_H
# define STRLEN_TESTS_BONUS_H

# include <stdlib.h>
# include "libft.h"

int	ft_strlen_timeout_test(void);
int	ft_strlen_timeout(char *str);
int	ft_sigabrt(void);
int	ft_sigfpe(void);
int	ft_sigpipe(void);
int	ft_sigill(void);
int	strlen_launcher_test_bonus(void);
#endif