/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memmove_reverse_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:21:05 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	memmove_reverse_test(void)
{
	char	libft[100];

	memset(libft, '0', 100);
	if (!memcmp(memmove(libft + 25, libft, 50),
		ft_memmove(libft + 25, libft, 50), 100))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
