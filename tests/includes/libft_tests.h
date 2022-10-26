/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:07:11 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 22:13:26 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

# include "../../framework/includes/libunit.h"
# include "../libft/libft.h"

# include <ctype.h>

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

#endif
