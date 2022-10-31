/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_tolower_z_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 14:19:29 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	tolower_z_test(void)
{
	if (ft_tolower('Z') == tolower('Z'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
