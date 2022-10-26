/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 19:55:36 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "LOWER START    ", &isalnum_lower_start_test);
	load_test(tests, "LOWER END      ", &isalnum_lower_end_test);
	load_test(tests, "LOWER START - 1", &isalnum_lower_start_less_one_test);
	load_test(tests, "LOWER END + 1  ", &isalnum_lower_end_plus_one_test);
	load_test(tests, "UPPER START    ", &isalnum_upper_start_test);
	load_test(tests, "UPPER END      ", &isalnum_upper_end_test);
	load_test(tests, "UPPER START - 1", &isalnum_upper_start_less_one_test);
	load_test(tests, "UPPER END + 1  ", &isalnum_upper_end_plus_one_test);
	load_test(tests, "SMALLEST       ", &isalnum_smallest_test);
	load_test(tests, "BIGGEST        ", &isalnum_biggest_test);
	load_test(tests, "SMALLEST - 1   ", &isalnum_smallest_less_one_test);
	load_test(tests, "BIGGEST + 1    ", &isalnum_biggest_plus_one_test);
}

int	isalnum_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_isalnum :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
