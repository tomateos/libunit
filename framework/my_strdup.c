/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:31:34 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 17:31:56 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Follows the behavior of strdup from libc. Allocates and creates a copy of s1.
** For more info, "man strdup".
*/

char	*my_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = 0;
	while (s1[len])
		len++;
	s2 = (char*)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	s2[len] = 0;
	while (len--)
		s2[len] = s1[len];
	return (s2);
}
