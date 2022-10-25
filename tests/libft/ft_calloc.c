/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:20:02 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/21 23:26:17 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*content;
	size_t	i;

	i = 0;
	if (nmemb * size < size)
		return (NULL);
	content = malloc (nmemb * size);
	if (!content)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *)content)[i] = 0;
		i ++;
	}
	return (content);
}

/*
int	main(void)
{
	void	*mem;

	mem = ft_calloc(2, 2);
	(void)mem;
}
*/
