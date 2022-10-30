/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlcpy_len_dest_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/30 11:32:28 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strlcpy_len_dest_test(void)
{
	char		*dest;
	char		*src;

	src = strdup("0000000000");
	dest = strdup("11111111111111111111");
	if (ft_strlcpy(dest, src, 20) == strlen(src) && !strncmp(src, dest, 20) &&
			dest[20] == 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
