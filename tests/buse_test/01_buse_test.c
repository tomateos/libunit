/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_buse_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 04:43:06 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 05:20:25 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include "string.h"

int	buse_test(void)
{
	char	*s;

	s = "pants";
	s[2] = 'z';
	return (0);
}
