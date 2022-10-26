/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_isalnum_biggest_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 20:06:15 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalnum_biggest_test(void)
{
	if (ft_isalnum('9') == !!isalnum('9'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
