/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:45:41 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:10:10 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	get_result(int code)
{
	if (code == 0)
		my_printf("\x1B[32m[OK]\n\x1B[0m");
	else if (code == 1)
		my_printf("\x1B[31m[KO]\n\x1B[0m");
	else if (code == 2)
		my_printf("\x1B[31m[SEGV]\n\x1B[0m");
	else if (code == 3)
		my_printf("\x1B[31m[BUSE]\n\x1B[0m");
	else
	{
		my_printf("\nUnknown test code, program will now exit\n");
		exit(1);
	}
}

static int	run_test(int (*f)(void))
{
	pid_t	pid;
	int		status;

	if ((pid = fork()) == -1)
	{
		my_printf("\nFork error, program will now exit\n");
		exit(1);
	}
	else if (pid == 0)
	{
		if (!f())
			return (0);
		else
			return (1);
	}
	else
	{
		wait(&status);
		if (status == SIGSEGV)
			return (2);
		else if (status == SIGBUS)
			return (3);
	}
	exit(1);
}

int			launch_tests(t_unit_test **tests)
{
	int			count;
	int			code;
	t_unit_test	*temp;

	temp = *tests;
	count = 0;
	while (temp)
	{
		my_printf("> %s : ", temp->name);
		if ((code = run_test(temp->f)) == 0)
			count++;
		g_total_tests++;
		get_result(code);
		temp = temp->next;
	}
	return (count);
}
