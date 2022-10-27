/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_empty_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:16:38 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	atoi_empty_test(void)
{
	if (atoi("") == ft_atoi(""))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
