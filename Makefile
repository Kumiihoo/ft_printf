# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 19:43:03 by mamedina          #+#    #+#              #
#    Updated: 2022/12/06 21:03:29 by mamedina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -I ./Libft -Wall -Werror -Wextra

NAME = libftprintf.a

SRC = ft_printf.c

LIBFT = Libft/libft.a

OBJS = $(SRC:.c=.o)

CC = gcc

all: $(NAME)

$(NAME):$(OBJS)
	make -C Libft
	cp $(LIBFT) $(NAME)
	gcc -c $(SRC)
	ar -crs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	make clean -C Libft
	/bin/rm -f $(OBJS)

fclean: clean
	make fclean -C Libft
	/bin/rm -f $(NAME)

re: 
	make fclean -C Libft
	fclean all

.PHONY: all clean fclean re