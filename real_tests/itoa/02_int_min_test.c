/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_int_min_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:52:53 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:07:11 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_test.h"
#include "libft.h"

int	itoa_int_min_test(void)
{
	char	*s1;
	char	*s2;

	s1 = c_itoa(-2147483648);
	s2 = ft_itoa(-2147483648);
	if (my_strcmp(s1, s2))
		return (-1);
	return (0);
}
