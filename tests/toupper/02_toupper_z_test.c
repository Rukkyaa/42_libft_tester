/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_toupper_z_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 18:26:48 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	toupper_z_test(void)
{
	if (ft_toupper('z') == toupper('z'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
