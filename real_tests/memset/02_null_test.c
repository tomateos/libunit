/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:51:27 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 20:26:37 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_test.h"
#include "libft.h"

int	memset_null_test(void)
{
	pid_t	pid;
	int		status;
	char	*s;

	if ((pid = fork()) == -1)
	{
		my_printf("\n Fork error, program will now exit\n");
		exit(1);
	}
	else if (pid == 0)
	{
		s = NULL;
		s = memset(s, 97, 5);
		return (-1);
	}
	else
	{
		wait(&status);
		if (status == SIGSEGV)
			return (0);
	}
	return (-1);
}
