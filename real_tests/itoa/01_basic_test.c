/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:06:49 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int	itoa_basic_test(void)
{
	if (my_strcmp(c_itoa(0), ft_itoa(0)))
		return (-1);
	if (my_strcmp(c_itoa(1), ft_itoa(1)))
		return (-1);
	if (my_strcmp(c_itoa(100), ft_itoa(100)))
		return (-1);
	if (my_strcmp(c_itoa(-1), ft_itoa(-1)))
		return (-1);
	if (my_strcmp(c_itoa(-123245), ft_itoa(-123245)))
		return (-1);
	if (my_strcmp(c_itoa(4), ft_itoa(4)))
		return (-1);
	return (0);
}
