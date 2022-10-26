/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_null_in_string_test.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:01:04 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 15:00:38 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_tests.h"

int	strlen_null_in_string_test(void)
{
	if (ft_strlen("Bonjour\0ca va ?") == ft_strlen("Bonjour\0ca va ?"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
