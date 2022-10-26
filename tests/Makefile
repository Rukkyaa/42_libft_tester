# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 17:19:09 by rukkyaa           #+#    #+#              #
#    Updated: 2022/10/26 20:04:41 by rukkyaa          ###   ########.fr        #
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

ISDIGIT_DIR = ./isdigit/
ISDIGIT_NAME = 00_isdigit_launcher.c \
				01_isdigit_smallest_test.c \
				02_isdigit_biggest_test.c \
				03_isdigit_smallest_less_one_test.c \
				04_isdigit_biggest_plus_one_test.c
ISDIGIT = $(addprefix $(ISDIGIT_DIR), $(ISDIGIT_NAME))
ISDIGIT_OBJS = $(ISDIGIT:.c=.o)

ISALNUM_DIR = ./isalnum/
ISALNUM_NAME = 00_isalnum_launcher.c \
				01_isalnum_lower_start_test.c \
				02_isalnum_lower_end_test.c \
				03_isalnum_lower_start_less_one_test.c \
				04_isalnum_lower_end_plus_one_test.c \
				05_isalnum_upper_start_test.c \
				06_isalnum_upper_end_test.c \
				07_isalnum_upper_start_less_one_test.c \
				08_isalnum_upper_end_plus_one_test.c \
				09_isalnum_smallest_test.c \
				10_isalnum_biggest_test.c \
				11_isalnum_smallest_less_one_test.c \
				12_isalnum_biggest_plus_one_test.c
ISALNUM = $(addprefix $(ISALNUM_DIR), $(ISALNUM_NAME))
ISALNUM_OBJS = $(ISALNUM:.c=.o)

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

$(NAME): $(OBJS) $(ISALPHA_OBJS) $(ISDIGIT_OBJS) $(ISALNUM_OBJS) $(STRLEN_OBJS)
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(FLAGS) -I $(INCLUDE) $(OBJS) $(ISALPHA_OBJS) $(ISDIGIT_OBJS) $(ISALNUM_OBJS) $(STRLEN_OBJS) $(LIBFT) $(LIB) -o $(NAME)
	./$(NAME)

clean:
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(ISALPHA_OBJS) $(ISDIGIT_OBJS) $(ISALNUM_OBJS) $(STRLEN_OBJS)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
