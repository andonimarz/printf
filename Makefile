# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 15:06:34 by amarzana          #+#    #+#              #
#    Updated: 2022/05/23 18:01:28 by amarzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c 	\
		ft_putchar.c	\
		ft_putstr.c		\
		ft_putvoid.c	\
		ft_putnbr.c		\
		ft_putunbr.c	\
		ft_puthexa.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
		gcc $(CFLAGS) -c $(SRC)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re