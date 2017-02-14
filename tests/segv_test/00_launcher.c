/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 04:09:00 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libunit.h"

int	segv_test_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("SEG_FAULT:\n");
	load_test(&testlist, "segv test", &segv_test);
	return (launch_tests(&testlist));
}
