/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strdup_normal_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:47:47 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strdup_normal_test(void)
{
	char const	*str = "Salut comment tu vas ?";

	if (!strcmp(str, ft_strdup(str)))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
