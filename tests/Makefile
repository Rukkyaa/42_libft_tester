# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 17:19:09 by rukkyaa           #+#    #+#              #
#    Updated: 2022/10/24 21:30:18 by rukkyaa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_test

CC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDE = ./includes

SRC = main.c
OBJS = $(SRC:.c=.o)

LIB_DIR = ../framework/
LIB_NAME = libunit.a
LIB = $(addprefix $(LIB_DIR), $(LIB_NAME))

LIBFT_DIR = ./libft/
LIBFT_NAME = libft.a
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_NAME))

STRLEN_DIR = ./strlen/
STRLEN_NAME = 00_strlen_launcher.c \
				01_strlen_basic_test.c \
				02_strlen_null_test.c
STRLEN = $(addprefix $(STRLEN_DIR), $(STRLEN_NAME))
STRLEN_OBJS = $(STRLEN:.c=.o)

.c.o :
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(STRLEN_OBJS)
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(FLAGS) -I $(INCLUDE) $(LIB) $(LIBFT) $(OBJS) $(STRLEN_OBJS) -o $(NAME)
	./$(NAME)

clean:
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(STRLEN_OBJS)

fclean: clean
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
