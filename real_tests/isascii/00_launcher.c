/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 21:24:39 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

int	c_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	isascii_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("ISASCII:\n");
	load_test(&testlist, "Basic test", &isascii_basic_test);
	return (launch_tests(&testlist));
}
