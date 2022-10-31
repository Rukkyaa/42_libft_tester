/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bzero_one_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 14:03:23 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	bzero_one_test(void)
{
	char	libft[100];
	char	real[100];

	memset(libft, '1', 100);
	memset(real, '1', 100);
	ft_bzero(libft, 1);
	bzero(real, 1);
	if (!memcmp(libft, real, 100))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
