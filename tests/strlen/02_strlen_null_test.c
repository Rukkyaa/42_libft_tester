/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_null_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:01:04 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/24 21:25:57 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_tests.h"

int	strlen_null_test(void)
{
	if (ft_strlen("") == ft_strlen(""))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
