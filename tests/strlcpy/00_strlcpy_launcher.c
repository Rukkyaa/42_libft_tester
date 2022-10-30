/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcpy_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/30 11:34:01 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "ZERO        ", &strlcpy_zero_test);
	load_test(tests, "ONE         ", &strlcpy_one_test);
	load_test(tests, "LEN DEST    ", &strlcpy_len_dest_test);
	load_test(tests, "LEN DEST + 1", &strlcpy_len_dest_plus_one_test);
}

int	strlcpy_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_strlcpy :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
