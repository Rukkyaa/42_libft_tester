/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:08:54 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 12:47:00 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdlib.h>

# define RESET "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"

typedef struct s_unit_test
{
	char				*name;
	int					(*function)(void);
	struct s_unit_test	*next;
}				t_unit_test;

void			load_test(t_unit_test **tests, char *name, int (*function)(void));
void			ft_testadd_back(t_unit_test **lst, t_unit_test *new);
void			ft_print(char *s);
void			ft_putendl(char *s);
void			print_res(unsigned int res, t_unit_test *tests);
int				launch_tests(t_unit_test *tests);
t_unit_test		*ft_testlast(t_unit_test *lst);

#endif
