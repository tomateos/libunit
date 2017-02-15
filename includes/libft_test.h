/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 14:40:07 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 21:40:07 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>

/*
** Organization
** Launcher - Correct Version - Tests...
*/

int		memset_launcher(void);
void	*c_memset(void *b, int c, size_t len);
int		memset_basic_test(void);
int		memset_null_test(void);
int		memset_segv_test(void);

int		bzero_launcher(void);
void	c_bzero(void *s, size_t	n);
int		bzero_basic_test(void);
int		bzero_null_test(void);
int		bzero_segv_test(void);

int		memchr_launcher(void);

int		memcmp_launcher(void);

int		strlen_launcher(void);
size_t	c_strlen(const char *s);
int		strlen_basic_test(void);
int		strlen_null_test(void);
int		strlen_large_test(void);

int		strchr_launcher(void);

int		strrchr_launcher(void);

int		strcmp_launcher(void);

int		strncmp_launcher(void);

int		isalpha_launcher(void);
int		c_isalpha(int c);
int		isalpha_basic_test(void);

int		isalnum_launcher(void);
int		c_isalnum(int c);
int		isalnum_basic_test(void);

int		isascii_launcher(void);
int		c_isascii(int c);
int		isascii_basic_test(void);

int		isdigit_launcher(void);
int		c_isdigit(int c);
int		isdigit_basic_test(void);

int		isprint_launcher(void);
int		c_isprint(int c);
int		isprint_basic_test(void);

int		toupper_launcher(void);
int		c_toupper(int c);
int		toupper_basic_test(void);

int		tolower_launcher(void);
int		c_tolower(int c);
int		tolower_basic_test(void);

int		strsplit_launcher(void);

int		itoa_launcher(void);

#endif
