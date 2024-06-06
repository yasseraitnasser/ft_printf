# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 11:21:34 by yait-nas          #+#    #+#              #
#    Updated: 2023/12/23 01:08:02 by yait-nas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_putchar.c ft_putnbr_hex.c ft_put_unsigned.c ft_printf.c \
		ft_put_adress.c ft_putnbr.c ft_putstr.c
FILES_o = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(FILES_o)

$(FILES_o):
	$(CC) $(CFLAGS) $(FILES) -c
	ar -rc $(NAME) $(FILES_o)

clean:
	rm -f $(FILES_o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
