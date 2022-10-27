/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_letter_after_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:34 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:17:58 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	atoi_letter_after_test(void)
{
	if (atoi("42a") == ft_atoi("42a"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
