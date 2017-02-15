/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 21:24:56 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

int	c_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	isprint_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("ISPRINT:\n");
	load_test(&testlist, "Basic test", &isprint_basic_test);
	return (launch_tests(&testlist));
}
