/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strncmp_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 15:20:19 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "EQUAL          ", &strncmp_equal_test);
	load_test(tests, "SUPERIOR       ", &strncmp_superior_test);
	load_test(tests, "INFERIOR       ", &strncmp_inferior_test);
	load_test(tests, "EMPTY FIRST    ", &strncmp_empty_first_test);
	load_test(tests, "EMPTY SECOND   ", &strncmp_empty_second_test);
	load_test(tests, "EMPTY          ", &strncmp_empty_test);
	load_test(tests, "EMPTY FIRST 0  ", &strncmp_empty_first_zero_test);
	load_test(tests, "EMPTY SECOND 0 ", &strncmp_empty_second_zero_test);
	load_test(tests, "EMPTY 0        ", &strncmp_empty_zero_test);
	load_test(tests, "LEN LESS ONE   ", &strncmp_len_less_one_test);
}

int	strncmp_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_strncmp :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
