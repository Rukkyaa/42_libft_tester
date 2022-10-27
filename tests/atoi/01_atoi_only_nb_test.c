/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_only_nb_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:16:04 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	atoi_only_nb_test(void)
{
	if (atoi("42") == ft_atoi("42"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
