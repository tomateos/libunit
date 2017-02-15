# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 19:51:18 by tzhou             #+#    #+#              #
#    Updated: 2017/02/14 21:39:42 by tzhou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

LIBUNIT = libunit.a

LIBFT = libft.a

FTPATH = /nfs/2016/t/tzhou/Projects/RUSHES/LIBUNIT/libunit/libft/
UNPATH = /nfs/2016/t/tzhou/Projects/RUSHES/LIBUNIT/libunit/

CFLAGS = -Wall -Werror -Wextra

IFLAGS = -I$(addsuffix includes, $(UNPATH)) -I$(FTPATH)

LFLAGS = -L$(UNPATH) -lunit -L$(FTPATH) -lft

STRLENSRC = 00_launcher.c 01_basic_test.c 02_null_test.c 03_large_test.c

MEMSETSRC = 00_launcher.c 01_basic_test.c 02_null_test.c

ISALPHASRC = 00_launcher.c 01_basic_test.c

ISALNUMSRC = 00_launcher.c 01_basic_test.c

ISASCIISRC = 00_launcher.c 01_basic_test.c

ISDIGITSRC = 00_launcher.c 01_basic_test.c

ISPRINTSRC = 00_launcher.c 01_basic_test.c

TOUPPERSRC = 00_launcher.c 01_basic_test.c

TOLOWERSRC = 00_launcher.c 01_basic_test.c

SRC = main.c \
	  $(addprefix strlen/, $(STRLENSRC)) \
	  $(addprefix memset/, $(MEMSETSRC)) \
	  $(addprefix isalpha/, $(ISALPHASRC)) \
	  $(addprefix isalnum/, $(ISALNUMSRC)) \
	  $(addprefix isascii/, $(ISASCIISRC)) \
	  $(addprefix isdigit/, $(ISDIGITSRC)) \
	  $(addprefix isprint/, $(ISPRINTSRC)) \
	  $(addprefix toupper/, $(TOUPPERSRC)) \
	  $(addprefix tolower/, $(TOLOWERSRC)) \

all: $(NAME)

$(NAME): $(LIBUNIT) $(LIBFT)
	gcc $(CFLAGS) $(SRC) $(IFLAGS) $(LFLAGS) -o test


$(LIBUNIT):
	make -C$(UNPATH) $(LIBUNIT)

$(LIBFT):
	make -C$(FTPATH) $(LIBFT)
clean:
	make -C$(FTPATH) clean
	make -C$(UNPATH) clean
fclean: 
	/bin/rm -f $(NAME)
	make -C$(FTPATH) fclean
	make -C$(UNPATH) fclean

re: fclean $(NAME)
