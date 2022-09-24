# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 17:56:46 by jsebasti          #+#    #+#              #
#    Updated: 2022/09/23 19:23:00 by jsebasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRC =	$(wildcard *.c)

SRCB = $(wildcard ft_ls*)

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

INCLUDE = ./

LIBC = ar -rcs

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
		$(LIBC) $(NAME) $(OBJ)

all: $(NAME)

bonus: $(NAME) $(OBJB)
		$(LIBC) $(NAME) $(OBJB)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o bonus