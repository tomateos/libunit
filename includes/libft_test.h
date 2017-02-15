/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 14:40:07 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:00:28 by tzhou            ###   ########.fr       */
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

int		strlen_launcher(void);
size_t	c_strlen(const char *s);
int		strlen_basic_test(void);
int		strlen_null_test(void);
int		strlen_large_test(void);

int		memset_launcher(void);
void	*c_memset(void *b, int c, size_t len);
int		memset_basic_test(void);
int		memset_null_test(void);
int		memset_segv_test(void);

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

int		strdup_launcher(void);
char	*c_strdup(const char *s1);
int		strdup_basic_test(void);
int		strdup_null_test(void);

int		strchr_launcher(void);
char	*c_strchr(const char *s, int c);
int		strchr_basic_test(void);
int		strchr_empty_test(void);

int		strrchr_launcher(void);
char	*c_strrchr(const char *s, int c);
int		strrchr_basic_test(void);
int		strrchr_empty_test(void);

int		strcmp_launcher(void);
int		c_strcmp(const char *s1, const char *s2);
int		strcmp_basic_test(void);
int		strcmp_null_test(void);

int		strncmp_launcher(void);
int		c_strncmp(const char *s1, const char *s2, size_t n);
int		strncmp_basic_test(void);
int		strncmp_null_test(void);
int		strncmp_short_test(void);

int		itoa_launcher(void);
char	*c_itoa(int n);
int		itoa_basic_test(void);
int		itoa_int_min_test(void);

#endif
