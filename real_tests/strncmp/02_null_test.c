/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:51:27 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 22:35:09 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_test.h"
#include "libft.h"

int	strncmp_null_test(void)
{
	pid_t	pid;
	int		status;

	if ((pid = fork()) == -1)
	{
		my_printf("\n Fork error, program will now exit\n");
		exit(1);
	}
	else if (pid == 0)
	{
		ft_strncmp(NULL, "pants", 5);
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
