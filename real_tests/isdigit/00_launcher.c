/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 21:40:33 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

int	c_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	isdigit_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("ISDIGIT:\n");
	load_test(&testlist, "Basic test", &isdigit_basic_test);
	return (launch_tests(&testlist));
}
