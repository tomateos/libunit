/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 22:32:55 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	strcmp_basic_test(void)
{
	char	*str1;
	char	*str2;

	str1 = "apples";
	str2 = "oranges";
	if (c_strcmp(str1, str2) == ft_strcmp(str1, str2))
		return (0);
	else
		return (-1);
}
