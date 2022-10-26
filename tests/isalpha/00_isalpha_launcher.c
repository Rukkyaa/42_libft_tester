/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalpha_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:06 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 15:23:08 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	load_tests(t_unit_test **tests)
{
	load_test(tests, "LOWER START    ", &isalpha_lower_start_test);
	load_test(tests, "LOWER END      ", &isalpha_lower_end_test);
	load_test(tests, "LOWER START - 1", &isalpha_lower_start_less_one_test);
	load_test(tests, "LOWER END + 1  ", &isalpha_lower_end_plus_one_test);
	load_test(tests, "UPPER START    ", &isalpha_lower_start_test);
	load_test(tests, "UPPER END      ", &isalpha_lower_end_test);
	load_test(tests, "UPPER START - 1", &isalpha_lower_start_less_one_test);
	load_test(tests, "UPPER END + 1  ", &isalpha_lower_end_plus_one_test);
}

int	isalpha_launcher(void)
{
	t_unit_test		*tests;
	unsigned int	res;

	ft_putendl("ft_isalpha :");
	tests = NULL;
	load_tests(&tests);
	res = launch_tests(tests);
	print_res(res, tests);
	return (res);
}
