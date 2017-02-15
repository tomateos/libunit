/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_large_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:38:37 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 20:50:38 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	strlen_large_test(void)
{
	char	*str;

	str = "I am an italian swabbie who sometimes eats things I shouldn't. Us;"
			"ually I eat oranges to stave scurvy, but I just can't stay away f;"
			"rom meats and exotic foreign foods. \0If you're here something is;"
			"wrong with the way you parsed the string";
	if (ft_strlen(str) == c_strlen(str))
		return (0);
	else
		return (-1);
}
