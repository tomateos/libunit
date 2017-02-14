/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 04:13:20 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libunit.h"

int	live_test_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("LIVE:\n");
	load_test(&testlist, "ok test", &ok_test);
	load_test(&testlist, "ko test", &ko_test);
	return (launch_tests(&testlist));
}
