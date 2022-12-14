/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_tolower_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 14:17:30 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "A              ", &tolower_a_test);
	load_test(tests, "Z              ", &tolower_z_test);
	load_test(tests, "A - 1          ", &tolower_a_less_one_test);
	load_test(tests, "Z + 1          ", &tolower_z_plus_one_test);
}

int	tolower_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_tolower :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
