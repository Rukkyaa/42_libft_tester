/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_bzero_launcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 14:02:47 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "ZERO        ", &bzero_zero_test);
	load_test(tests, "ONE         ", &bzero_one_test);
	load_test(tests, "NORMAL      ", &bzero_normal_test);
}

int	bzero_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_bzero :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
