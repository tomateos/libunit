/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:46:54 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 14:46:31 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"

int	g_total_tests = 0;

int	main(void)
{
	int count;

	print_banner();
	count = 0;
	count += live_test_launcher();
	count += segv_test_launcher();
	count += buse_test_launcher();
	my_printf("\n%d / %d tests checked\n", count, g_total_tests);
	if (count == g_total_tests)
		return (0);
	else
		return (-1);
}
