/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_large_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:38:37 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 15:50:40 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	strlen_large_test(void)
{
	char	*str;

	str = "I am an italian swabbie who sometimes eats things I shouldn't. Usual\
		   ly I eat oranges to stave scurvy, but I just can't stay away from me\
		   ats and exotic foreign foods. \0If you're here something is wrong wi\
		   th the way you parsed the string";

	if (ft_strlen(str) == c_strlen(str))
		return (0);
	else
		return (-1);
}
