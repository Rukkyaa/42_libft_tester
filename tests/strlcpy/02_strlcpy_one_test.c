/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlcpy_one_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/30 11:23:56 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strlcpy_one_test(void)
{
	char		*dest;
	char		*src;

	src = strdup("0000000000");
	dest = strdup("11111111111111111111");
	if (ft_strlcpy(dest, src, 1) == strlen(src) && strncmp(src, dest, 1) &&
			!strncmp(dest + 1, "1111111111111111111", 19) && dest[0] == 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
