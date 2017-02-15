/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 20:59:58 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

void	*c_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char*)b;
	i = 0;
	while (i < len)
		temp[i++] = c;
	return (b);
}

int		memset_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("MEMSET:\n");
	load_test(&testlist, "Basic test", &memset_basic_test);
	load_test(&testlist, "NULL test", &memset_null_test);
	return (launch_tests(&testlist));
}
