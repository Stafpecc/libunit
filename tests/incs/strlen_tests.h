/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:05:51 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 15:27:13 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_TESTS_H
# define STRLEN_TESTS_H

# include <stdlib.h>
# include <stdio.h>

int		ft_strlen_ko(char *str);
size_t	ft_strlen_buserror(char const *str);
int		strlen_launcher_test(void);
int		ft_strlen_basic_test(void);
int		ft_strlen_ko_test(void);
int		ft_strlen_segfault_test(void);
int		ft_strlen_bus_test(void);

#endif
