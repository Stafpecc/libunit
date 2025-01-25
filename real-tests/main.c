/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:38:14 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/25 21:17:41 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/atoi_tests.h"
#include "incs/strdup_test.h"
#include "incs/strjoin_tests.h"
#include "incs/strlen_tests.h"

int main(void)
{
	atoi_launcher();
	strdup_launcher();
	strjoin_launcher();
	strlen_launcher();
	return 0;
}