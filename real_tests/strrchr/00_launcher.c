/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 22:45:30 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

char	*c_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	int		flag;
	char	*last;

	i = 0;
	len = my_strlen(s);
	flag = 0;
	while (i <= len)
	{
		if (*s == c)
		{
			flag = 1;
			last = (char*)s;
		}
		i++;
		s++;
	}
	if (!flag)
		return (NULL);
	return (last);
}

int		strrchr_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("STRRCHR:\n");
	load_test(&testlist, "Basic test", &strrchr_basic_test);
	load_test(&testlist, "Empty test", &strrchr_empty_test);
	return (launch_tests(&testlist));
}
