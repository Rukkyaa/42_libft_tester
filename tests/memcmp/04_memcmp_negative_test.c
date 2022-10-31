/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_memcmp_negative_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 16:05:09 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	memcmp_negative_test(void)
{
	char const	s1[] = {0, 42, 127, -127};
	char const	s2[] = {0, 42, 127, -128};

	if (ft_memcmp(s1, s2, 4) > 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
