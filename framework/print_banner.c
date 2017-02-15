/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_banner.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:52:54 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:11:49 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_banner(void)
{
	my_printf("\x1B[36m");
	my_printf("*********************************\n");
	my_printf("****     42 - Unit Tests     ****\n");
	my_printf("*********************************\n");
	my_printf("\x1b[0m");
}
