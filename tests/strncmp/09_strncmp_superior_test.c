/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_strncmp_superior_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 15:27:04 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strncmp_superior_test(void)
{
	if (ft_strncmp("SaluT", "Salut", 5) < 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
