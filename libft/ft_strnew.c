/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:35:52 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/02 15:24:27 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*output;
	size_t	i;

	output = (char*)malloc(size + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (i <= size)
		output[i++] = 0;
	return (output);
}
