/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isascii_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 22:04:35 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "SMALLEST       ", &isascii_smallest_test);
	load_test(tests, "BIGGEST        ", &isascii_biggest_test);
	load_test(tests, "SMALLEST - 1   ", &isascii_smallest_less_one_test);
	load_test(tests, "BIGGEST + 1    ", &isascii_biggest_plus_one_test);
}

int	isascii_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_isascii :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
