/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memcmp_superior_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 15:59:23 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	memcmp_superior_test(void)
{
	if (ft_memcmp("SaluT", "Salut", 5) < 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
