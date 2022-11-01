/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strdup_empty_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:48:09 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strdup_empty_test(void)
{
	char const	*str = (char *)"";

	if (!strcmp(str, ft_strdup(str)))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
