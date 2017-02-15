/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 01:22:27 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/03 01:28:13 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_str(char *big, char *little)
{
	if (!*big)
		return (0);
	while (*little && *little == *big)
	{
		little++;
		big++;
	}
	if (*little)
		return (0);
	return (1);
}

char		*ft_strstr(const char *big, const char *little)
{
	char	*bcopy;
	char	*lcopy;

	if (!*little)
		return ((char*)big);
	bcopy = (char*)big;
	lcopy = (char*)little;
	while (*bcopy)
	{
		if (*bcopy == *lcopy)
		{
			if (check_str(bcopy, lcopy))
				return (bcopy);
		}
		bcopy++;
	}
	return (NULL);
}
