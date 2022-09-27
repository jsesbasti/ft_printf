# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 21:24:52 by jsebasti          #+#    #+#              #
#    Updated: 2022/09/27 21:37:08 by jsebasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		char_conv.c

LIBC = ar -rcs

OBJ = $(SRC:.c=.o)

CC = gcc

RM = rm -rf

FLAGS = -Werror -Wall -Wextra

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME) = $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o bonus