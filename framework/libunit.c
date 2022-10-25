/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:09:23 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/25 09:31:41 by rukkyaa          ###   ########.fr       */
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
			write(1, "OK", 2);
			return (1);
		}
		else if (pid == 256)
			write(1, "KO", 2);
	}
	if (WIFSIGNALED(pid))
	{
		if (WTERMSIG(pid) == SIGSEGV)
			write(1, "[SEGV]", 6);
		else if (WTERMSIG(pid) == SIGBUS)
			write(1, "[BUS]", 5);
	}
	return (0);
}

static int	run_test(int (*function)(void))
{
	pid_t	pid;

	pid = fork();
	if (pid == -1)
	{
		write(1, "Fork error", 10);
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
	new_test -> next = *tests;
	*tests = new_test;
}

int	launch_tests(t_unit_test *tests)
{
	int	count;

	count = 0;
	while (tests)
	{
		count += run_test(tests->function);
		tests = tests->next;
	}
	return (count);
}
