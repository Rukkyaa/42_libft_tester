/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_toupper_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 18:28:47 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "a              ", &toupper_a_test);
	load_test(tests, "z              ", &toupper_z_test);
	load_test(tests, "a - 1          ", &toupper_a_less_one_test);
	load_test(tests, "z + 1          ", &toupper_z_plus_one_test);
}

int	toupper_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_toupper :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
