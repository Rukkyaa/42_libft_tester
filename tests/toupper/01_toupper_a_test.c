/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_toupper_a_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 18:05:26 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	toupper_a_test(void)
{
	if (ft_toupper('a') == toupper('a'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
