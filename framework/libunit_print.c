/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:43:53 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 12:46:19 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static unsigned int	nb_tests(t_unit_test *tests)
{
	unsigned int	count;

	count = 0;
	while (tests)
	{
		count ++;
		tests = tests->next;
	}
	return (count);
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb % 10 + '0');
}


void	print_res(unsigned int res, t_unit_test *tests)
{
	if (res == nb_tests(tests))
		ft_print(GREEN);
	else
		ft_print(RED);
	ft_print("\t");
	ft_putnbr(res);
	ft_print("/");
	ft_putnbr(nb_tests(tests));
	ft_print(" tests pass\n");
}
