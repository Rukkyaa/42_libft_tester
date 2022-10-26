/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_isalnum_upper_end_plus_one_test.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 19:57:54 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalnum_upper_end_plus_one_test(void)
{
	if (ft_isalnum('Z' + 1) == !!isalnum('Z' + 1))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
