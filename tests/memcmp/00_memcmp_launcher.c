/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memcmp_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 16:01:56 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "EQUAL          ", &memcmp_equal_test);
	load_test(tests, "SUPERIOR       ", &memcmp_superior_test);
	load_test(tests, "INFERIOR       ", &memcmp_inferior_test);
	load_test(tests, "NEGATIVE       ", &memcmp_negative_test);
}

int	memcmp_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_memcmp :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
