/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:30:27 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 17:43:44 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Writes int n to standard output.
*/

void	my_putnbr(int n)
{
	char digit;

	if (n >= 0 && n < 10)
		digit = n + 48;
	else if (n >= 10)
	{
		digit = n % 10 + 48;
		my_putnbr(n / 10);
	}
	else
	{
		my_putchar('-');
		if (n <= -10)
			my_putnbr((n / 10) * -1);
		digit = (n % 10) * -1 + 48;
	}
	my_putchar(digit);
}
