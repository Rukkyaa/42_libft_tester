/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strchr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 16:09:40 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "BEGIN          ", &strchr_begin_test);
	load_test(tests, "MIDDLE         ", &strchr_middle_test);
	load_test(tests, "END            ", &strchr_end_test);
	load_test(tests, "ZERO           ", &strchr_zero_test);
	load_test(tests, "NO OCCURENCE   ", &strchr_no_occurence_test);
	load_test(tests, "MULTIPLE RESULT", &strchr_multiple_occurence_test);
}

int	strchr_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_strchr :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
