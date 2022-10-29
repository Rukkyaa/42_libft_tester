/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_tolower_A_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 18:40:07 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	tolower_A_test(void)
{
	if (ft_tolower('A') == tolower('A'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
