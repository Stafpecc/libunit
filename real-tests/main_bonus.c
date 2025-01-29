/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:53:33 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 19:04:06 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs_bonus/atoi_tests_bonus.h"
#include "../incs_bonus/strdup_tests_bonus.h"
#include "../incs_bonus/strjoin_tests_bonus.h"
#include "../incs_bonus/strlen_tests_bonus.h"
#include "../../framework/incs_bonus/libunit_bonus.h"

int	main(void)
{
	atoi_launcher_bonus();
	strdup_launcher_bonus();
	strjoin_launcher_bonus();
	strlen_launcher_bonus();
	return (0);
}
