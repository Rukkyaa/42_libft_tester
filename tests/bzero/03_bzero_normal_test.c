/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bzero_normal_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 14:02:58 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	bzero_normal_test(void)
{
	char	libft[100];
	char	real[100];

	memset(libft, '1', 100);
	memset(real, '1', 100);
	ft_bzero(libft, 50);
	bzero(real, 50);
	if (!memcmp(libft, real, 100))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
