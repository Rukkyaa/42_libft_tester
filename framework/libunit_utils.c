/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:29:36 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 11:28:16 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

void	ft_testadd_back(t_unit_test **lst, t_unit_test *new)
{
	t_unit_test	*tmp;

	if (*lst)
	{
		tmp = ft_testlast(*lst);
		tmp->next = new;
	}
	else
		*lst = new;
}

t_unit_test	*ft_testlast(t_unit_test *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

static unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i ++;
	return (i);
}

void	ft_print(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_putendl(char *s)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}
