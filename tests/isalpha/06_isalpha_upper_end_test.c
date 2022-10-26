/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_isalpha_upper_end_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 15:24:26 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalpha_upper_end_test(void)
{
	if (ft_isalpha('Z') == !!(isalpha('Z')))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
