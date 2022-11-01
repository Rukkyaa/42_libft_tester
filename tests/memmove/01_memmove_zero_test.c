/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memmove_zero_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:09:59 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	memmove_zero_test(void)
{
	char	libft[100];
	char	real[100];
	char	src[100];

	memset(libft, '0', 100);
	memset(real, '0', 100);
	memset(src, '1', 100);
	if (!memcmp(ft_memmove(libft, src, 0), memmove(real, src, 0), 100))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
