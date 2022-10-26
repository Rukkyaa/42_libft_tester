/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_isalnum_biggest_plus_one_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 20:06:36 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalnum_biggest_plus_one_test(void)
{
	if (ft_isalnum('9' + 1) == !!isalnum('9' + 1))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
