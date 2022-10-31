/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memset_one_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 13:15:09 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	memset_one_test(void)
{
	char	libft[100];
	char	real[100];

	bzero(libft, 100);
	bzero(real, 100);
	ft_memset(libft, '1', 1);
	memset(real, '1', 1);
	if (!memcmp(libft, real, 100))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
