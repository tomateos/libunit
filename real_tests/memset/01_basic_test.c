/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 20:53:55 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_test.h"
#include "libft.h"

int	memset_basic_test(void)
{
	char	*str1;
	char	*str2;

	str1 = my_strdup("jump");
	str2 = my_strdup("dash");
	str1 = c_memset(str1, 97, 5);
	str2 = ft_memset(str2, 97, 5);
	if (!my_strcmp(str1, str2))
		return (0);
	else
		return (-1);
}
