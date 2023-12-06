# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 14:46:29 by redrouic          #+#    #+#              #
#    Updated: 2023/12/06 14:54:33 by redrouic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	src/ft_putchar.c\
		src/ft_putstr.c\
		src/ft_putnbrb.c\
		src/ft_putnbr.c\
		src/ft_uputnbr.c\
		src/ft_printf.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	libftprintf.a

CFLAGS	+=	-Wall -Wextra -Werror

RM	=	rm -rf

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
 
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
