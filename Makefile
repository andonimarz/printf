# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 15:06:34 by amarzana          #+#    #+#              #
#    Updated: 2022/05/12 18:09:22 by amarzana         ###   ########.fr        #
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

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rc

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "New files created"

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@$(RM) $(OBJ)
	@echo "$(OBJ) files deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) deleted"

re: fclean 

norm:
	@norminette -R CheckForbiddenSourceHeader *.c
	@norminette -R CheckDefine *.h

.PHONY: all clean fclean re norm