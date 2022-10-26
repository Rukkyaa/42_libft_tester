/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_isalnum_upper_end_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:52 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 19:57:40 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	isalnum_upper_end_test(void)
{
	if (ft_isalnum('Z') == !!isalnum('Z'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
