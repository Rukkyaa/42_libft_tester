/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_isalpha_upper_end_plus_one_test.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 15:24:40 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalpha_upper_end_plus_one_test(void)
{
	if (ft_isalpha('Z' + 1) == !!(isalpha('Z' + 1)))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
