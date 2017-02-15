/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:46:54 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 16:40:55 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_test.h"

int	g_total_tests = 0;

int	main(void)
{
	int count;

	print_banner();
	count = 0;
	count += strlen_launcher();
	my_printf("\n%d / %d tests checked\n", count, g_total_tests);
	return (0);
}
