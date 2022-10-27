/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_letter_before_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:34 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:17:09 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	atoi_letter_before_test(void)
{
	if (atoi("salut42") == ft_atoi("salut42"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
