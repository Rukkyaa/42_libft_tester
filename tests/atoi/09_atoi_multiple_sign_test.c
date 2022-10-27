/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_atoi_multiple_sign_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:34 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/27 23:24:01 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	atoi_multiple_sign_test(void)
{
	if (atoi("--42") == ft_atoi("--42"))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
