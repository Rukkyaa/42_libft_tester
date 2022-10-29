/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_tolower_Z_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 18:40:25 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	tolower_Z_test(void)
{
	if (ft_tolower('Z') == tolower('Z'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
