/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 22:51:26 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"

char		*c_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = 0;
	while (s1[len])
		len++;
	s2 = (char*)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	s2[len] = 0;
	while (len--)
		s2[len] = s1[len];
	return (s2);
}

int			strdup_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	my_printf("STRDUP:\n");
	load_test(&testlist, "Basic test", &strdup_basic_test);
	load_test(&testlist, "NULL test", &strdup_null_test);
	return (launch_tests(&testlist));
}
