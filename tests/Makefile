# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 19:51:18 by tzhou             #+#    #+#              #
#    Updated: 2017/02/14 17:37:57 by tzhou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

LIBUNIT = libunit.a

CFLAGS = -Wall -Werror -Wextra

IFLAGS = -I../includes

LFLAGS = -L.. -lunit

LSRC = 00_launcher.c 01_ok_test.c 02_ko_test.c

SSRC = 00_launcher.c 01_segv_test.c

BSRC = 00_launcher.c 01_buse_test.c

SRC = main.c $(addprefix live_test/, $(LSRC)) $(addprefix segv_test/, $(SSRC))\
	  $(addprefix buse_test/, $(BSRC))

all: $(NAME)

$(NAME): $(LIBUNIT)
	gcc $(CFLAGS) $(SRC) $(IFLAGS) $(LFLAGS) -o test
	./test

$(LIBUNIT):
	make -C.. $(LIBUNIT)

clean:
	make -C.. clean

fclean: 
	/bin/rm -f $(NAME)
	make -C.. fclean

re: fclean $(NAME)
