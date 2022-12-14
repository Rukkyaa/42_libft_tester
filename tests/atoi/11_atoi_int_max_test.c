/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_atoi_int_max_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:34 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:30:41 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	atoi_int_max_test(void)
{
	if (atoi("2147483647") == ft_atoi("2147483647"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
