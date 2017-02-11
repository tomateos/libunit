# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 19:51:18 by tzhou             #+#    #+#              #
#    Updated: 2017/02/10 20:16:57 by tzhou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

CFLAGS = -Wall -Werror -Wextra

DIR = framework/

SRC = *.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I includes -c $(addprefix $(DIR), SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)
