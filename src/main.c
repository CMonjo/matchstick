/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

void modified_map(stick_t *stick)
{
	int line = stick->line;
	int matches = stick->matches;

	stick->map[line - 1] -= matches;
	stick->error = 0;
	if (stick->turn == 1)
		my_putstr("Player removed ");
	else
		my_putstr("AI removed ");
	my_put_nbr(stick->matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(stick->line);
	my_putstr("\n");
}

void ia_turn(stick_t *stick)
{
	int max = 0;

	srand(time(NULL));
	while (1) {
		stick->line = (rand() % (stick->nb_line - 1 + 1) + 1);
		if (stick->map[stick->line - 1] != 0)
			break;
	}
	if (stick->limit > stick->map[stick->line - 1])
		max = stick->map[stick->line - 1];
	else
		max = stick->limit;
	stick->matches = ((rand() % (max - 1 + 1) + 1));
	stick->turn = 0;
}

int game_loop(stick_t *stick)
{
	if (stick->turn == 0) {
		if (player_turn(stick) == 84)
			return (84);
	} else {
		my_putstr("AI’s turn...\n");
		ia_turn(stick);
	}
	if (stick->error == 0)
		modified_map(stick);
	return (0);
}

int main(int ac, char **av)
{
	stick_t *stick = malloc(sizeof(stick_t));
	int rwinner = 0;

	if (ac != 3 || my_str_isnum(av[1]) != 1 || my_str_isnum(av[2]) != 1)
		return (84);
	if (generate_matchstick(stick,  av) == 1)
		return (84);
	stick->status = 3;
	stick->turn = 0;
	stick->error = 0;
	while (stick->status == 3) {
		if (game_loop(stick) == 84)
			return (84);
		if (stick->error == 0)
			display_map(stick);
		victory_game(stick);
	}
	rwinner = stick->status;
	free_stick(stick);
	return (rwinner);
}
