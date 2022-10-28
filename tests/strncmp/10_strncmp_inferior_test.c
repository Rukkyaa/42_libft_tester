/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_strncmp_inferior_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 15:26:58 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strncmp_inferior_test(void)
{
	if (ft_strncmp("Salut", "SaluT", 5) > 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
