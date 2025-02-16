/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:38:14 by anfichet          #+#    #+#             */
/*   Updated: 2025/01/26 18:45:35 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"
#include "strdup_tests.h"
#include "strjoin_tests.h"
#include "strlen_tests.h"

int	main(void)
{
	atoi_launcher();
	strdup_launcher();
	strjoin_launcher();
	strlen_launcher();
	return (0);
}
