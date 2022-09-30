# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstrong <bstrong@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 12:42:26 by bstrong           #+#    #+#              #
#    Updated: 2021/10/20 12:42:26 by bstrong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC		=	ft_printf.c\
			ft_putnbr.c\
			transfer_xx.c\
			conv.c\
			conv_c.c\
			conv_s.c\
			conv_p.c\
			conv_di.c\
			conv_xx.c\
			conv_u.c


HEADER	=	ft_printf.h

OBJ		=	$(patsubst %.c,%.o,$(SRC))

FLAGS	=	-Wall -Wextra -Werror

CC		=	clang

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
		ar rc $(NAME) $?

%.o		: %.c
		$(CC) $(FLAGS) -I ./ -c $< -o $@

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re		:	fclean all