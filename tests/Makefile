# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 17:19:09 by rukkyaa           #+#    #+#              #
#    Updated: 2022/10/26 15:37:46 by rukkyaa          ###   ########.fr        #
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

ISALPHA_DIR = ./isalpha/
ISALPHA_NAME = 00_isalpha_launcher.c \
				01_isalpha_lower_start_test.c \
				02_isalpha_lower_end_test.c \
				03_isalpha_lower_start_less_one_test.c \
				04_isalpha_lower_end_plus_one_test.c \
				05_isalpha_upper_start_test.c \
				06_isalpha_upper_end_test.c \
				07_isalpha_upper_start_less_one_test.c \
				08_isalpha_upper_end_plus_one_test.c
ISALPHA = $(addprefix $(ISALPHA_DIR), $(ISALPHA_NAME))
ISALPHA_OBJS = $(ISALPHA:.c=.o)

STRLEN_DIR = ./strlen/
STRLEN_NAME = 00_strlen_launcher.c \
				01_strlen_basic_test.c \
				02_strlen_null_test.c \
				03_strlen_null_in_string_test.c
STRLEN = $(addprefix $(STRLEN_DIR), $(STRLEN_NAME))
STRLEN_OBJS = $(STRLEN:.c=.o)

.c.o :
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(ISALPHA_OBJS) $(STRLEN_OBJS)
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(FLAGS) -I $(INCLUDE) $(OBJS) $(ISALPHA_OBJS) $(STRLEN_OBJS) $(LIBFT) $(LIB) -o $(NAME)
	./$(NAME)

clean:
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(ISALPHA_OBJS) $(STRLEN_OBJS)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
