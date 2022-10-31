/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strnstr_equal_zero_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/31 14:25:43 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strnstr_equal_zero_test(void)
{
	char const	*str = "Salut comment tu vas ?";

	if (ft_strnstr(str, str, 0) == 0)
		return (EXIT_SUCCESS);
	printf("Result : %s", ft_strnstr(str, str, 0));
	return (EXIT_FAILURE);
}
