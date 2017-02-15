/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 22:38:58 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

char	*c_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = my_strlen(s);
	while (i <= len)
	{
		if (*s == c)
			return ((char*)s);
		i++;
		s++;
	}
	return (NULL);
}

int		strchr_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("STRCHR:\n");
	load_test(&testlist, "Basic test", &strchr_basic_test);
	load_test(&testlist, "Empty test", &strchr_empty_test);
	return (launch_tests(&testlist));
}
