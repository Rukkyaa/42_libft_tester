/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_strrchr_multiple_occurence_test.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/28 16:26:02 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	strrchr_multiple_occurence_test(void)
{
	char const	*str = "SalSut";

	if (ft_strrchr("SalSut", 'S') == str + 3)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
