/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:56:20 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 20:59:32 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdarg.h>

/*
** structure for storing tests
*/

typedef	struct			s_unit_test
{
	char				*name;
	int					(*f)(void);
	struct s_unit_test	*next;
}						t_unit_test;

/*
** 
*/

extern int				g_total_tests;

/*
** printf conversions
*/

extern char const		*g_conversion;

/*
** test framework functions
*/

void					load_test(t_unit_test **tests,
							char *name, int (*f)(void));
int						launch_tests(t_unit_test **tests);

/*
** useful library functions
*/

void					my_putchar(char c);
void					my_putstr(char const *s);
void					my_putnbr(int n);
char					*my_strchr(const char *s, int c);
int						my_strcmp(const char *s1, const char *s2);
char					*my_strdup(const char *s);
char					*my_strndup(const char *s1, size_t n);
size_t					my_strlen(const char *s);
int						my_printf(const char *format, ...);

#endif
