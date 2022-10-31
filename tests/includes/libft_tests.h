/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:07:11 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 16:02:56 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

# include "../../framework/includes/libunit.h"
# include "../libft/libft.h"

# include <ctype.h>
# include <string.h>

int	strlen_launcher(void);
int	strlen_basic_test(void);
int	strlen_null_test(void);
int	strlen_null_in_string_test(void);

int	isalpha_launcher(void);
int	isalpha_lower_start_test(void);
int	isalpha_lower_end_test(void);
int	isalpha_lower_start_less_one_test(void);
int	isalpha_lower_end_plus_one_test(void);
int	isalpha_upper_start_test(void);
int	isalpha_upper_end_test(void);
int	isalpha_upper_start_less_one_test(void);
int	isalpha_upper_end_plus_one_test(void);

int	isdigit_launcher(void);
int	isdigit_smallest_test(void);
int	isdigit_biggest_test(void);
int	isdigit_smallest_less_one_test(void);
int	isdigit_biggest_plus_one_test(void);

int	isalnum_launcher(void);
int	isalnum_lower_start_test(void);
int	isalnum_lower_end_test(void);
int	isalnum_lower_start_less_one_test(void);
int	isalnum_lower_end_plus_one_test(void);
int	isalnum_upper_start_test(void);
int	isalnum_upper_end_test(void);
int	isalnum_upper_start_less_one_test(void);
int	isalnum_upper_end_plus_one_test(void);
int	isalnum_smallest_test(void);
int	isalnum_biggest_test(void);
int	isalnum_smallest_less_one_test(void);
int	isalnum_biggest_plus_one_test(void);

int	isascii_launcher(void);
int	isascii_smallest_test(void);
int	isascii_biggest_test(void);
int	isascii_smallest_less_one_test(void);
int	isascii_biggest_plus_one_test(void);

int	isprint_launcher(void);
int	isprint_smallest_test(void);
int	isprint_biggest_test(void);
int	isprint_smallest_less_one_test(void);
int	isprint_biggest_plus_one_test(void);

int	atoi_launcher(void);
int	atoi_only_nb_test(void);
int	atoi_empty_test(void);
int	atoi_letter_before_test(void);
int	atoi_letter_middle_test(void);
int	atoi_letter_after_test(void);
int	atoi_letter_only_test(void);
int	atoi_minus_test(void);
int	atoi_plus_test(void);
int	atoi_multiple_sign_test(void);
int	atoi_zero_test(void);
int	atoi_int_max_test(void);
int	atoi_int_min_test(void);

int	strncmp_launcher(void);
int	strncmp_equal_test(void);
int	strncmp_empty_first_test(void);
int	strncmp_empty_second_test(void);
int	strncmp_empty_test(void);
int	strncmp_empty_first_zero_test(void);
int	strncmp_empty_second_zero_test(void);
int	strncmp_empty_zero_test(void);
int	strncmp_len_less_one_test(void);
int	strncmp_superior_test(void);
int	strncmp_inferior_test(void);

int	strchr_launcher(void);
int	strchr_begin_test(void);
int	strchr_middle_test(void);
int	strchr_end_test(void);
int	strchr_zero_test(void);
int	strchr_no_occurence_test(void);
int	strchr_multiple_occurence_test(void);

int	strrchr_launcher(void);
int	strrchr_begin_test(void);
int	strrchr_middle_test(void);
int	strrchr_end_test(void);
int	strrchr_zero_test(void);
int	strrchr_no_occurence_test(void);
int	strrchr_multiple_occurence_test(void);

int	strnstr_launcher(void);
int	strnstr_equal_test(void);
int	strnstr_empty_haystack_test(void);
int	strnstr_empty_needle_test(void);
int	strnstr_empty_test(void);
int	strnstr_equal_zero_test(void);
int	strnstr_empty_haystack_zero_test(void);
int	strnstr_empty_needle_zero_test(void);
int	strnstr_empty_zero_test(void);
int	strnstr_len_bigger_test(void);

int	toupper_launcher(void);
int	toupper_a_test(void);
int	toupper_z_test(void);
int	toupper_a_less_one_test(void);
int	toupper_z_plus_one_test(void);

int	tolower_launcher(void);
int	tolower_a_test(void);
int	tolower_z_test(void);
int	tolower_a_less_one_test(void);
int	tolower_z_plus_one_test(void);

int	strlcpy_launcher(void);
int	strlcpy_zero_test(void);
int	strlcpy_one_test(void);
int	strlcpy_len_dest_test(void);
int	strlcpy_len_dest_plus_one_test(void);

int	memset_launcher(void);
int	memset_zero_test(void);
int	memset_one_test(void);
int	memset_normal_test(void);

int	bzero_launcher(void);
int	bzero_zero_test(void);
int	bzero_one_test(void);
int	bzero_normal_test(void);

int	memcpy_launcher(void);
int	memcpy_zero_test(void);
int	memcpy_one_test(void);
int	memcpy_normal_test(void);
int	memcpy_full_test(void);

int	memcmp_launcher(void);
int	memcmp_equal_test(void);
int	memcmp_inferior_test(void);
int	memcmp_superior_test(void);
int	memcmp_negative_test(void);
#endif
