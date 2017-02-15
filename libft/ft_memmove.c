/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 16:57:21 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/03 17:33:46 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dcpy;
	unsigned char	*scpy;
	size_t			i;

	dcpy = (unsigned char*)dst;
	scpy = (unsigned char*)src;
	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			dcpy[i] = scpy[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			dcpy[i] = scpy[i];
		}
	}
	return (dst);
}
