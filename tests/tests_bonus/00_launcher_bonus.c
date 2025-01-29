/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:33:16 by tarini            #+#    #+#             */
/*   Updated: 2025/01/26 18:45:35 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "../incs_bonus/strlen_tests_bonus.h"

int	strlen_launcher_test_bonus(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test_bonus(&testlist, "Timeout test", "STRLEN", \
				&ft_strlen_timeout_test);
	load_test_bonus(&testlist, "Sigabort test", "SIGABORT", &ft_sigabrt);
	load_test_bonus(&testlist, "Sigfpe test", "SIGFPE", &ft_sigfpe);
	load_test_bonus(&testlist, "Sigpipe test", "SIGPIPE", &ft_sigpipe);
	load_test_bonus(&testlist, "Sigill test", "SIGILL", &ft_sigill);
	return (launch_test_bonus(&testlist));
}
