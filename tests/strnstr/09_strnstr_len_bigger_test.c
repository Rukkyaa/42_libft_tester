/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_strnstr_len_bigger_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 17:08:48 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strnstr_len_bigger_test(void)
{
	char const	*str = "Salut comment tu vas ?";

	if (ft_strnstr(str, "Salut commentt", 14) == 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
