/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memset_zero_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 13:18:35 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	memset_zero_test(void)
{
	char	libft[100];
	char	real[100];

	bzero(libft, 100);
	bzero(real, 100);
	ft_memset(libft, '1', 0);
	if (!memcmp(libft, real, 100))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
