# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 21:24:52 by jsebasti          #+#    #+#              #
#    Updated: 2022/09/28 19:58:08 by jsebasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_printf.h

NAME = libftprintf.a

SRC =	ft_printf.c \
		src/ft_print_char.c \
		src/ft_print_str.c \
		src/ft_print_digits.c \
		src/ft_print_pointers.c \
		src/ft_print_unsigned.c \
		src/ft_print_hexa_low.c \
		src/ft_print_hexa_up.c

CC = gcc

RM = rm -rf

FLAGS = -Werror -Wall -Wextra

LIBC = ar -rcs

OBJ = $(SRC:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ) $(HEADER)
	$(LIBC) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o