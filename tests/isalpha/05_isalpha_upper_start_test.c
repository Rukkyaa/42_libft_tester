/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_isalpha_upper_start_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 19:09:43 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalpha_upper_start_test(void)
{
	if (ft_isalpha('A') == !!isalpha('A'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
