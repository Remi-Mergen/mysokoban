/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** main
*/

#include "sokoban.h"

static int error_handling(int ac, char **av)
{
	if (ac != 2) {
		write(2, "Incorrect argument. See -h for more information\n", 48);
		return 84;
	}
	if ((my_strlen(av[1]) == 2 && av[1][0] == '-' && av[1][1] == 'h') ||
		my_strcmp(av[1], "--help") == 0) {
		print_help();
		exit(0);
	}
	return 0;
}

int main(int ac, char **av)
{
	int code = 1;

	if (error_handling(ac, av) == 84)
		return 84;
	while (code == 1) {
		code = process(av[1]);
		if (code == 84)
			return 84;
	}
	return 0;
}
