/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:08:54 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/25 09:13:28 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdlib.h>

typedef struct s_unit_test
{
	char				*name;
	int					(*function)(void);
	struct s_unit_test	*next;
}				t_unit_test;

void	load_test(t_unit_test **tests, char *name, int (*function)(void));
int		launch_tests(t_unit_test *tests);

#endif
