/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 15:52:30 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

size_t	c_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("STRLEN:\n");
	load_test(&testlist, "Basic test", &strlen_basic_test);
	load_test(&testlist, "NULL test", &strlen_null_test);
	load_test(&testlist, "Large test", &strlen_large_test);
	return (launch_tests(&testlist));
}
