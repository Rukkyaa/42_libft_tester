/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_strncmp_empty_zero_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 15:13:14 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strncmp_empty_zero_test(void)
{
	if (ft_strncmp("", "", 0) == 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
