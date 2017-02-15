/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_short_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:34:15 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:01:20 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	strncmp_short_test(void)
{
	char	*str1;
	char	*str2;

	str1 = "group";
	str2 = "groove";
	if (c_strncmp(str1, str2, 3) == ft_strncmp(str1, str2, 3))
		return (0);
	else
		return (-1);
}
