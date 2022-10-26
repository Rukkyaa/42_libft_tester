/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_isalnum_upper_start_less_one_test.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 19:57:46 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalnum_upper_start_less_one_test(void)
{
	if (ft_isalnum('A' - 1) == !!isalnum('A' - 1))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
