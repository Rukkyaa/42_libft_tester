/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_tolower_Z_plus_one_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 18:48:40 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	tolower_Z_plus_one_test(void)
{
	if (ft_tolower('Z' + 1) == tolower('Z' + 1))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
