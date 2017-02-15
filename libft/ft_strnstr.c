/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 22:01:14 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/05 16:50:21 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_str(char *big, char *little, size_t left)
{
	if (!*big)
		return (0);
	while (*little && *little == *big && left-- > 0)
	{
		little++;
		big++;
	}
	if (*little)
		return (0);
	return (1);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*bcopy;
	char	*lcopy;

	i = 0;
	if (!*little)
		return ((char*)big);
	bcopy = (char*)big;
	lcopy = (char*)little;
	while (i < len && *bcopy)
	{
		if (*bcopy == *lcopy)
		{
			if (check_str(bcopy, lcopy, len - i))
				return (bcopy);
		}
		bcopy++;
		i++;
	}
	return (NULL);
}
