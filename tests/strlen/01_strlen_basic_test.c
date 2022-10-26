/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:01:04 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 12:42:28 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strlen_basic_test(void)
{
	if (ft_strlen("Salut") == ft_strlen("Salut"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
