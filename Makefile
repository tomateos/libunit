# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 19:51:18 by tzhou             #+#    #+#              #
#    Updated: 2017/02/13 22:56:03 by tzhou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

CFLAGS = -Wall -Werror -Wextra

DIR = framework/

FSRC = load_test.c launch_tests.c print_banner.c

MYSRC = my_putchar.c my_putstr.c my_putnbr.c my_strchr.c my_strcmp.c \
		 my_strdup.c my_strndup.c my_strlen.c my_printf.c

OBJ = ${FSRC:.c=.o} ${MYSRC:.c=.o}

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I includes -c $(addprefix $(DIR), $(MYSRC) $(FSRC))
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)
