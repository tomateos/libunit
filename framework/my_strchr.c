/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:35:12 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 17:36:56 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Follows the behavior of strchr from libc. Locates the first unsigned char c
** in string s. For more info, "man strchr".
*/

char	*my_strchr(const char *s, int c)
{
	int		i;
	int		len;

	i = 0;
	len = my_strlen(s);
	while (i <= len)
	{
		if (*s == c)
			return ((char*)s);
		i++;
		s++;
	}
	return (NULL);
}
