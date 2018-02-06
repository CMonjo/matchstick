/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

void free_stick(stick_t *stick)
{
	free(stick->map);
	free(stick);
}

void victory_game(stick_t *stick)
{
	int i = 0;

	for (i = 0; stick->map[i] != -1;) {
		if (stick->map[i] == 0)
			i++;
		else
			break;
	}
	if (stick->map[i] == -1 && stick->turn == 1) {
		my_putstr("You lost, too bad...\n");
		stick->status = 2;
		return;
	}
	if (stick->map[i] == -1 && stick->turn == 0) {
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		stick->status = 1;
		return;
	}
}

int generate_matchstick(stick_t *stick, char **av)
{
	int i = 0;
	int tmp = 0;

	stick->nb_line = my_getnbr(av[1]);
	stick->limit = my_getnbr(av[2]);
	tmp = stick->nb_line;
	stick->map = malloc(sizeof(int) * (tmp + 1));
	if (stick->map == NULL || stick->limit < 1 || stick->nb_line < 2
		|| stick->nb_line > 99)
		return (1);
	for (int k = 1; tmp != 0; k += 2, i++, tmp--)
		stick->map[i] = k;
	stick->map[i] = -1;
	stick->len = stick->map[i - 1];
	display_map(stick);
	return (0);
}
