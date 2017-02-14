/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:59:09 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 23:13:07 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>

/*
** Launchers
*/

int	live_test_launcher(void);
int	segv_test_launcher(void);
int	buse_test_launcher(void);

/*
** Tests
*/

int	ok_test(void);
int	ko_test(void);
int	segv_test(void);
int	buse_test(void);

#endif
