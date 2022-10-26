/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isprint_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 22:10:36 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "SMALLEST       ", &isprint_smallest_test);
	load_test(tests, "BIGGEST        ", &isprint_biggest_test);
	load_test(tests, "SMALLEST - 1   ", &isprint_smallest_less_one_test);
	load_test(tests, "BIGGEST + 1    ", &isprint_biggest_plus_one_test);
}

int	isprint_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_isprint :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
