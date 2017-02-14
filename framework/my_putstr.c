/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:28:57 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 17:29:32 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Writes string s to standard output.
*/

void	my_putstr(char const *s)
{
	if (!s)
		return ;
	while (*s)
		my_putchar(*(s++));
}
