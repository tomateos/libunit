/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 16:28:10 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/03 16:37:15 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dcpy;
	unsigned char	*scpy;

	i = 0;
	dcpy = (unsigned char*)dst;
	scpy = (unsigned char*)src;
	while (i < n)
	{
		dcpy[i] = scpy[i];
		i++;
	}
	return (dst);
}
