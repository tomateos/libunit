/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:47:14 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/02 15:04:53 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*output;
	unsigned int	ind;

	if (!s)
		return (NULL);
	output = (char*)malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	ind = 0;
	while (s[ind + start] && ind < len)
	{
		output[ind] = s[ind + start];
		ind++;
	}
	output[ind] = 0;
	return (output);
}
