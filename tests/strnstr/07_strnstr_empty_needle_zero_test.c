/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_strnstr_empty_needle_zero_test.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/29 18:22:54 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strnstr_empty_needle_zero_test(void)
{
	char const	*str = "Salut comment tu vas ?";

	if (ft_strnstr(str, "", 0))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
