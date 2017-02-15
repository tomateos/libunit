/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 17:21:25 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/03 17:27:21 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy;
	unsigned char	test;
	size_t			i;

	test = (unsigned char)c;
	copy = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (copy[i] == test)
			return ((void*)&copy[i]);
		i++;
	}
	return (NULL);
}
