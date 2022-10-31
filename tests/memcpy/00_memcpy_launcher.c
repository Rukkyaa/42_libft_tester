/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memcpy_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 14:21:14 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "ZERO        ", &memcpy_zero_test);
	load_test(tests, "ONE         ", &memcpy_one_test);
	load_test(tests, "NORMAL      ", &memcpy_normal_test);
	load_test(tests, "FULL        ", &memcpy_full_test);
}

int	memcpy_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_memcpy :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
