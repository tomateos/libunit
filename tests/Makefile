# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 19:51:18 by tzhou             #+#    #+#              #
#    Updated: 2017/02/14 01:28:30 by tzhou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

LIBUNIT = libunit.a

CFLAGS = -Wall -Werror -Wextra

LSRC = live_test/00_launcher.c \
	   live_test/01_ok_test.c \
	   live_test/02_ko_test.c

SSRC = segv_test/00_launcher.c \
	   segv_test/01_segv_test.c

BSRC = buse_test/00_launcher.c \
	   buse_test/01_buse_test.c

SRC = main.c $(LSRC) $(SSRC) $(BSRC)

all: $(NAME)

$(NAME): $(LIBUNIT)
	gcc $(CFLAGS) $(SRC) -I ../includes -L .. -lunit -o test
	./test

$(LIBUNIT):
	make -C.. -f Makefile libunit.a

clean:
	make clean -C.. Makefile
fclean: 
	/bin/rm -f $(NAME)
	make fclean - C.. Makefile

re: fclean $(NAME)
