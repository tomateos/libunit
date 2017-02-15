/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:28:35 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 15:35:54 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libft.h"

int	strlen_basic_test(void)
{
	char	*str;

	str = "goonsquad";

	if (ft_strlen(str) == c_strlen(str))
		return (0);
	else
		return (-1);
}
