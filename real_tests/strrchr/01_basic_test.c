/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 22:58:49 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int	strrchr_basic_test(void)
{
	char	*str;
	char	*a;
	char	*b;

	str = "Choose your office";
	a = c_strrchr(str, 'o');
	b = ft_strrchr(str, 'o');
	if (my_strcmp(a, b))
		return (-1);
	return (0);
}
