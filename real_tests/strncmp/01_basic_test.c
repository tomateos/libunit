/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:01:06 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	strncmp_basic_test(void)
{
	char	*str1;
	char	*str2;

	str1 = "apples";
	str2 = "oranges";
	if (c_strncmp(str1, str2, 100) == ft_strncmp(str1, str2, 100))
		return (0);
	else
		return (-1);
}
