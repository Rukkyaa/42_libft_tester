/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_calloc_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:39:11 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "NORMAL         ", &calloc_normal_test);
	load_test(tests, "MAX INT        ", &calloc_max_int_test);
}

int	calloc_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_calloc :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
