/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strdup_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:48:59 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "NORMAL         ", &strdup_normal_test);
	load_test(tests, "ZERO           ", &strdup_zero_test);
	load_test(tests, "EMPTY          ", &strdup_empty_test);
}

int	strdup_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_strdup :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
