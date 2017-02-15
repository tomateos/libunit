/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 21:44:26 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	isdigit_basic_test(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (c_isdigit(i) != ft_isdigit(i))
			return (-1);
		i++;
	}
	return (0);
}
