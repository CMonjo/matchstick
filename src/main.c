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

	if (line > stick->nb_line || matches > stick->map[line - 1]
		|| matches > stick->limit || matches == 0) {
		my_putstr("error\n");
		stick->turn = 0;
		stick->error = 1;
		return;
	}
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

void game_loop(stick_t *stick)
{
	if (stick->turn == 0) {
		if (stick->error == 0)
			my_putstr("Your turn:\n");
		my_putstr("Line: ");
		stick->line = my_getnbr(read_input(1));
		my_putstr("Matches: ");
		stick->matches = my_getnbr(read_input(2));
		stick->turn = 1;
	} else {
		my_putstr("AI’s turn...\n");
		ia_turn(stick);
	}
	modified_map(stick);
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
		game_loop(stick);
		if (stick->error == 0)
			display_map(stick);
		victory_game(stick);
	}
	rwinner = stick->status;
	free_stick(stick);
	return (rwinner);
}
