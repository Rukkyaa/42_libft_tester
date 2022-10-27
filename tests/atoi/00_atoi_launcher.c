/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:32:29 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "ONLY NUMBER    ", &atoi_only_nb_test);
	load_test(tests, "EMPTY          ", &atoi_empty_test);
	load_test(tests, "LETTER BEFORE  ", &atoi_letter_before_test);
	load_test(tests, "LETTER MIDDLE  ", &atoi_letter_middle_test);
	load_test(tests, "LETTER AFTER   ", &atoi_letter_after_test);
	load_test(tests, "ONLY LETTER    ", &atoi_letter_only_test);
	load_test(tests, "MINUS          ", &atoi_minus_test);
	load_test(tests, "PLUS           ", &atoi_plus_test);
	load_test(tests, "MULTIPLE SIGN  ", &atoi_multiple_sign_test);
	load_test(tests, "ZERO           ", &atoi_zero_test);
	load_test(tests, "INT MIN        ", &atoi_int_max_test);
	load_test(tests, "INT MAX        ", &atoi_int_min_test);
}

int	atoi_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_atoi :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
