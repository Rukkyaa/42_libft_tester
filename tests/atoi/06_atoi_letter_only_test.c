/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_atoi_letter_only_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:34 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:18:20 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	atoi_letter_only_test(void)
{
	if (atoi("salut") == ft_atoi("salut"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
