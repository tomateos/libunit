/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:46:54 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 23:12:26 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"

int	main(void)
{
	int count;

	print_banner();
	g_total_tests = 0;
	count = 0;
	count += live_test_launcher();
	count += segv_test_launcher();
	count += buse_test_launcher();
	my_printf("\n%d / %d tests checked\n", count, g_total_tests);
	return (0);
}
