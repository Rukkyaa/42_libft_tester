/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strnstr_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 17:51:08 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "EQUAL           ", &strnstr_equal_test);
	load_test(tests, "EMPTY HAYSTACK  ", &strnstr_empty_haystack_test);
	load_test(tests, "EMPTY NEEDLE    ", &strnstr_empty_needle_test);
	load_test(tests, "EMPTY           ", &strnstr_empty_test);
	load_test(tests, "EQUAL 0         ", &strnstr_equal_zero_test);
	load_test(tests, "EMPTY HAYSTACK 0", &strnstr_empty_haystack_zero_test);
	load_test(tests, "EMPTY NEEDLE 0  ", &strnstr_empty_needle_zero_test);
	load_test(tests, "EMPTY 0         ", &strnstr_empty_zero_test);
	load_test(tests, "LEN BIGGER      ", &strnstr_len_bigger_test);
}

int	strnstr_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_strnstr :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
