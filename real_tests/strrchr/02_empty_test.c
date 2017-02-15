/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 22:41:40 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 22:45:50 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	strrchr_empty_test(void)
{
	char	*str;
	char	*a;

	str = "Choose your office";
	a = ft_strrchr(str, 'z');
	if (a)
		return (-1);
	return (0);
}
