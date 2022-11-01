# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 17:19:09 by rukkyaa           #+#    #+#              #
#    Updated: 2022/11/01 13:04:20 by rukkyaa          ###   ########.fr        #
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

ISASCII_DIR = ./isascii/
ISASCII_NAME = 00_isascii_launcher.c \
				01_isascii_smallest_test.c \
				02_isascii_biggest_test.c \
				03_isascii_smallest_less_one_test.c \
				04_isascii_biggest_plus_one_test.c

ISASCII = $(addprefix $(ISASCII_DIR), $(ISASCII_NAME))
ISASCII_OBJS = $(ISASCII:.c=.o)

ISPRINT_DIR = ./isprint/
ISPRINT_NAME = 00_isprint_launcher.c \
				01_isprint_smallest_test.c \
				02_isprint_biggest_test.c \
				03_isprint_smallest_less_one_test.c \
				04_isprint_biggest_plus_one_test.c

ISPRINT = $(addprefix $(ISPRINT_DIR), $(ISPRINT_NAME))
ISPRINT_OBJS = $(ISPRINT:.c=.o)

TOUPPER_DIR = ./toupper/
TOUPPER_NAME = 00_toupper_launcher.c \
				01_toupper_a_test.c \
				02_toupper_z_test.c \
				03_toupper_a_less_one_test.c \
				04_toupper_z_plus_one_test.c

TOUPPER = $(addprefix $(TOUPPER_DIR), $(TOUPPER_NAME))
TOUPPER_OBJS = $(TOUPPER:.c=.o)

TOLOWER_DIR = ./tolower/
TOLOWER_NAME = 00_tolower_launcher.c \
				01_tolower_a_test.c \
				02_tolower_z_test.c \
				03_tolower_a_less_one_test.c \
				04_tolower_z_plus_one_test.c

TOLOWER = $(addprefix $(TOLOWER_DIR), $(TOLOWER_NAME))
TOLOWER_OBJS = $(TOLOWER:.c=.o)

STRLEN_DIR = ./strlen/
STRLEN_NAME = 00_strlen_launcher.c \
				01_strlen_basic_test.c \
				02_strlen_null_test.c \
				03_strlen_null_in_string_test.c
STRLEN = $(addprefix $(STRLEN_DIR), $(STRLEN_NAME))
STRLEN_OBJS = $(STRLEN:.c=.o)

ATOI_DIR = ./atoi/
ATOI_NAME = 00_atoi_launcher.c \
			01_atoi_only_nb_test.c \
			02_atoi_empty_test.c \
			03_atoi_letter_before_test.c \
			04_atoi_letter_middle_test.c \
			05_atoi_letter_after_test.c \
			06_atoi_letter_only_test.c \
			07_atoi_minus_test.c \
			08_atoi_plus_test.c \
			09_atoi_multiple_sign_test.c \
			10_atoi_zero_test.c \
			11_atoi_int_max_test.c \
			12_atoi_int_min_test.c
ATOI = $(addprefix $(ATOI_DIR), $(ATOI_NAME))
ATOI_OBJS = $(ATOI:.c=.o)

STRNCMP_DIR = ./strncmp/
STRNCMP_NAME = 00_strncmp_launcher.c \
			01_strncmp_equal_test.c \
			02_strncmp_empty_first_test.c \
			03_strncmp_empty_second_test.c \
			04_strncmp_empty_test.c \
			05_strncmp_empty_first_zero_test.c \
			06_strncmp_empty_second_zero_test.c \
			07_strncmp_empty_zero_test.c \
			08_strncmp_len_less_one_test.c \
			09_strncmp_superior_test.c \
			10_strncmp_inferior_test.c

STRNCMP = $(addprefix $(STRNCMP_DIR), $(STRNCMP_NAME))
STRNCMP_OBJS = $(STRNCMP:.c=.o)

STRCHR_DIR = ./strchr/
STRCHR_NAME = 00_strchr_launcher.c \
			01_strchr_begin_test.c \
			02_strchr_middle_test.c \
			03_strchr_end_test.c \
			04_strchr_zero_test.c \
			05_strchr_no_occurence_test.c \
			06_strchr_multiple_occurence_test.c

STRCHR = $(addprefix $(STRCHR_DIR), $(STRCHR_NAME))
STRCHR_OBJS = $(STRCHR:.c=.o)

STRRCHR_DIR = ./strrchr/
STRRCHR_NAME = 00_strrchr_launcher.c \
			01_strrchr_begin_test.c \
			02_strrchr_middle_test.c \
			03_strrchr_end_test.c \
			04_strrchr_zero_test.c \
			05_strrchr_no_occurence_test.c \
			06_strrchr_multiple_occurence_test.c

STRRCHR = $(addprefix $(STRRCHR_DIR), $(STRRCHR_NAME))
STRRCHR_OBJS = $(STRRCHR:.c=.o)

STRNSTR_DIR = ./strnstr/
STRNSTR_NAME = 00_strnstr_launcher.c \
			01_strnstr_equal_test.c \
			02_strnstr_empty_haystack_test.c \
			03_strnstr_empty_needle_test.c \
			04_strnstr_empty_test.c \
			05_strnstr_equal_zero_test.c \
			06_strnstr_empty_haystack_zero_test.c \
			07_strnstr_empty_needle_zero_test.c \
			08_strnstr_empty_zero_test.c \
			09_strnstr_len_bigger_test.c \

STRNSTR = $(addprefix $(STRNSTR_DIR), $(STRNSTR_NAME))
STRNSTR_OBJS = $(STRNSTR:.c=.o)

STRLCPY_DIR = ./strlcpy/
STRLCPY_NAME = 00_strlcpy_launcher.c \
				01_strlcpy_zero_test.c \
				02_strlcpy_one_test.c \
				03_strlcpy_len_dest_test.c \
				04_strlcpy_len_dest_plus_one_test.c

STRLCPY = $(addprefix $(STRLCPY_DIR), $(STRLCPY_NAME))
STRLCPY_OBJS = $(STRLCPY:.c=.o)

MEMSET_DIR = ./memset/
MEMSET_NAME = 00_memset_launcher.c \
				01_memset_zero_test.c \
				02_memset_one_test.c \
				03_memset_normal_test.c

MEMSET = $(addprefix $(MEMSET_DIR), $(MEMSET_NAME))
MEMSET_OBJS = $(MEMSET:.c=.o)

BZERO_DIR = ./bzero/
BZERO_NAME = 00_bzero_launcher.c \
				01_bzero_zero_test.c \
				02_bzero_one_test.c \
				03_bzero_normal_test.c

BZERO = $(addprefix $(BZERO_DIR), $(BZERO_NAME))
BZERO_OBJS = $(BZERO:.c=.o)

MEMCPY_DIR = ./memcpy/
MEMCPY_NAME = 00_memcpy_launcher.c \
				01_memcpy_zero_test.c \
				02_memcpy_one_test.c \
				03_memcpy_normal_test.c \
				04_memcpy_full_test.c

MEMCPY = $(addprefix $(MEMCPY_DIR), $(MEMCPY_NAME))
MEMCPY_OBJS = $(MEMCPY:.c=.o)

MEMCMP_DIR = ./memcmp/
MEMCMP_NAME = 00_memcmp_launcher.c \
				01_memcmp_equal_test.c \
				02_memcmp_inferior_test.c \
				03_memcmp_superior_test.c \
				04_memcmp_negative_test.c

MEMCMP = $(addprefix $(MEMCMP_DIR), $(MEMCMP_NAME))
MEMCMP_OBJS = $(MEMCMP:.c=.o)

MEMMOVE_DIR = ./memmove/
MEMMOVE_NAME = 00_memmove_launcher.c \
				01_memmove_zero_test.c \
				02_memmove_normal_test.c \
				03_memmove_reverse_test.c \

MEMMOVE = $(addprefix $(MEMMOVE_DIR), $(MEMMOVE_NAME))
MEMMOVE_OBJS = $(MEMMOVE:.c=.o)

.c.o :
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(ISALPHA_OBJS) $(ISDIGIT_OBJS) $(ISALNUM_OBJS) $(ISASCII_OBJS) $(ISPRINT_OBJS) $(TOUPPER_OBJS) $(TOLOWER_OBJS) $(STRLEN_OBJS) $(ATOI_OBJS) $(STRNCMP_OBJS) $(STRCHR_OBJS) $(STRRCHR_OBJS) $(STRNSTR_OBJS) $(STRLCPY_OBJS) $(MEMSET_OBJS) $(BZERO_OBJS) $(MEMCPY_OBJS) $(MEMCMP_OBJS) $(MEMMOVE_OBJS)
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(FLAGS) -I $(INCLUDE) $(OBJS) $(ISALPHA_OBJS) $(ISDIGIT_OBJS) $(ISALNUM_OBJS) $(ISASCII_OBJS) $(ISPRINT_OBJS) $(TOUPPER_OBJS) $(TOLOWER_OBJS) $(STRLEN_OBJS) $(ATOI_OBJS) $(STRNCMP_OBJS) $(STRCHR_OBJS) $(STRRCHR_OBJS) $(STRNSTR_OBJS) $(STRLCPY_OBJS) $(MEMSET_OBJS) $(BZERO_OBJS) $(MEMCPY_OBJS) $(MEMCMP_OBJS) $(MEMMOVE_OBJS) $(LIBFT) $(LIB) -o $(NAME)
	./$(NAME)

clean:
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(ISALPHA_OBJS) $(ISDIGIT_OBJS) $(ISALNUM_OBJS) $(ISASCII_OBJS) $(ISPRINT_OBJS) $(TOUPPER_OBJS) $(TOLOWER_OBJS) $(STRLEN_OBJS) $(ATOI_OBJS) $(STRNCMP_OBJS) $(STRCHR_OBJS) $(STRRCHR_OBJS) $(STRNSTR_OBJS) $(STRLCPY_OBJS) $(MEMSET_OBJS) $(BZERO_OBJS) $(MEMCPY_OBJS) $(MEMCMP_OBJS) $(MEMMOVE_OBJS)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
