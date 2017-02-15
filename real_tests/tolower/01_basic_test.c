/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 21:32:29 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	tolower_basic_test(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 255)
	{
		if (c_tolower(i) != ft_tolower(j))
			return (-1);
		i++;
		j++;
	}
	return (0);
}
