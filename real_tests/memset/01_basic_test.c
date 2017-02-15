/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:41:31 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_test.h"
#include "libft.h"

int	memset_basic_test(void)
{
	char	*str1;
	char	*str2;

	str1 = my_strdup("jumper pants");
	str2 = my_strdup("dashingpants");
	str1 = c_memset(str1, 97, 6);
	str2 = ft_memset(str2, 97, 6);
	if (!my_strcmp(str1, str2))
		return (0);
	else
		return (-1);
}
