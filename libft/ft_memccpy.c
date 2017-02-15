/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 16:34:59 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/03 17:33:59 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dcpy;
	unsigned char	*scpy;
	unsigned char	target;

	i = 0;
	dcpy = (unsigned char*)dst;
	scpy = (unsigned char*)src;
	target = (unsigned char)c;
	while (i < n)
	{
		dcpy[i] = scpy[i];
		if (scpy[i] == target)
			return ((void*)&dcpy[i + 1]);
		i++;
	}
	return (NULL);
}
