/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:14 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/11/01 13:31:38 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft_tests.h"

void	ft_header(void)
{
	ft_print("\n");
	ft_print(PURPLE);
	ft_putendl("/$$       /$$$$$$ /$$$$$$$  /$$$$$$$$ /$$$$$$$$       /$$$$$$$$\
/$$$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$$ /$$   /$$ /$$$$$$$");
	ft_putendl("| $$      |_  $$_/| $$__  $$| $$_____/|__  $$__/      |__\
$$__/| $$_____/ /$$__  $$|__  $$__/| $$_____/| $$  | $$| $$__  $$");
	ft_putendl("| $$        | $$  | $$  \\ $$| $$         | $$            | $$\
| $$      | $$  \\__/   | $$   | $$      | $$  | $$| $$  \\ $$");
	ft_putendl("| $$        | $$  | $$$$$$$ | $$$$$      | $$            | $$\
| $$$$$   |  $$$$$$    | $$   | $$$$$   | $$  | $$| $$$$$$$/");
	ft_putendl("| $$        | $$  | $$__  $$| $$__/      | $$            | $$\
| $$__/    \\____  $$   | $$   | $$__/   | $$  | $$| $$__  $$");
	ft_putendl("| $$        | $$  | $$  \\ $$| $$         | $$            | $$\
| $$       /$$  \\ $$   | $$   | $$      | $$  | $$| $$  \\ $$");
	ft_putendl("| $$$$$$$$ /$$$$$$| $$$$$$$/| $$         | $$            | $$\
| $$$$$$$$|  $$$$$$/   | $$   | $$$$$$$$|  $$$$$$/| $$  | $$");
	ft_putendl("|________/|______/|_______/ |__/         |__/            |__/\
|________/ \\______/    |__/   |________/ \\______/ |__/  |__/\n");
	ft_print(RESET);
}

int	main(void)
{
	ft_header();
	isalpha_launcher();
	isdigit_launcher();
	isalnum_launcher();
	isascii_launcher();
	isprint_launcher();
	strlen_launcher();
	atoi_launcher();
	strncmp_launcher();
	strchr_launcher();
	strrchr_launcher();
	strnstr_launcher();
	toupper_launcher();
	tolower_launcher();
	strlcpy_launcher();
	memset_launcher();
	bzero_launcher();
	memcpy_launcher();
	memcmp_launcher();
	memmove_launcher();
	calloc_launcher();
}
