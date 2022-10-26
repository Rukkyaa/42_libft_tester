/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:09:23 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/26 12:24:29 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

static t_unit_test	*create_test(char *name, int (*function)(void))
{
	t_unit_test	*new_test;

	new_test = malloc(sizeof(t_unit_test));
	if (!new_test || !function)
		return (NULL);
	new_test -> name = name;
	new_test -> function = function;
	return (new_test);
}

static int	check_result(pid_t pid)
{
	if (WIFEXITED(pid))
	{
		if (pid == 0)
		{
			ft_putendl(GREEN"OK"RESET);
			return (1);
		}
		else if (pid == 256)
			ft_putendl(RED"KO"RESET);
	}
	if (WIFSIGNALED(pid))
	{
		if (WTERMSIG(pid) == SIGSEGV)
			ft_putendl(RED"[SEGV]"RESET);
		else if (WTERMSIG(pid) == SIGBUS)
			ft_putendl(RED"[BUS]"RESET);
	}
	return (0);
}

static int	run_test(int (*function)(void))
{
	pid_t	pid;

	pid = fork();
	if (pid == -1)
	{
		ft_putendl(RED"[FORK ERROR]"RESET);
		return (EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (function() == 0)
			exit(0);
		exit(1);
	}
	else
		wait(&pid);
	return (check_result(pid));
}

void	load_test(t_unit_test **tests, char *name, int (*function)(void))
{
	t_unit_test	*new_test;

	new_test = create_test(name, function);
	if (!new_test)
		return ;
	ft_testadd_back(tests, new_test);
}

int	launch_tests(t_unit_test *tests)
{
	int	count;

	count = 0;
	while (tests)
	{
		ft_print("\t");
		ft_print(tests->name);
		ft_print(" : ");
		count += run_test(tests->function);
		tests = tests->next;
	}
	return (count);
}
