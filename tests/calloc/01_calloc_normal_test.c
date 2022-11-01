/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_calloc_normal_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:33:27 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	calloc_normal_test(void)
{
	char	tab[100];
	char	*test;

	bzero(tab, 100);
	test = ft_calloc(25, 4);
	if (!memcmp(tab, test, 100))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
