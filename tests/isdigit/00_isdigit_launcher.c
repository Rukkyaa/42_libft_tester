/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isdigit_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 19:52:58 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "SMALLEST       ", &isdigit_smallest_test);
	load_test(tests, "BIGGEST        ", &isdigit_biggest_test);
	load_test(tests, "SMALLEST - 1   ", &isdigit_smallest_less_one_test);
	load_test(tests, "BIGGEST + 1    ", &isdigit_biggest_plus_one_test);
}

int	isdigit_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_isdigit :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
