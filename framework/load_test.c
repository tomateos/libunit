/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:44:44 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 04:06:02 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit_test	*new_test(char *name, int (*f)(void))
{
	t_unit_test	*test;

	if ((test = (t_unit_test*)malloc(sizeof(t_unit_test))))
	{
		test->f = f;
		if (!(test->name = my_strdup(name)))
		{
			my_printf("\nMalloc failed, program will now exit\n");
			exit(1);
		}
		test->next = NULL;
		return (test);
	}
	my_printf("\nMalloc failed, program will now exit\n");
	exit(1);
}

void				load_test(t_unit_test **test, char *name, int (*f)(void))
{
	t_unit_test	*temp;

	if (!(*test))
	{

		temp = new_test(name, f);
		*test = temp;
	}
	else
	{
		temp = *test;
		while (temp->next)
			temp = temp->next;
		temp->next = new_test(name, f);
	}
}
