/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strrchr_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 16:22:34 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "BEGIN          ", &strrchr_begin_test);
	load_test(tests, "MIDDLE         ", &strrchr_middle_test);
	load_test(tests, "END            ", &strrchr_end_test);
	load_test(tests, "ZERO           ", &strrchr_zero_test);
	load_test(tests, "NO OCCURENCE   ", &strrchr_no_occurence_test);
	load_test(tests, "MULTIPLE RESULT", &strrchr_multiple_occurence_test);
}

int	strrchr_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_strrchr :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
