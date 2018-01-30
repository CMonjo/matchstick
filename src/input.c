/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

void fill_data(stick_t *stick, char *buffer, int type)
{
	if (type == 1) {
		stick->line = my_getnbr(buffer);
		check_input_line(stick);
	}
	if (type == 2) {
		stick->matches = my_getnbr(buffer);
		check_input_matches(stick);
	}
}

int read_input(stick_t *stick, int type)
{
	char *buffer = NULL;

	buffer = my_read(0);
	if (buffer == NULL)
		return (84);
	if (my_str_isnum(buffer) != 1) {
		my_putstr("Error: invalid input (positive number expected)\n");
		stick->error = 1;
	}
	else
		fill_data(stick, buffer, type);
	free(buffer);
	return (0);
}

void check_input_matches(stick_t *stick)
{
	if (stick->matches > stick->limit) {
		my_putstr("Error: you cannot remove more than ");
		my_put_nbr(stick->limit);
		my_putstr(" matches per turn\n");
		stick->turn = 0;
		stick->error = 1;
		return;
	}
	if (stick->matches == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		stick->turn = 0;
		stick->error = 1;
		return;
	}
	if (stick->matches > stick->map[stick->line - 1]) {
		my_putstr("Error: not enough matches on this line\n");
		stick->turn = 0;
		stick->error = 1;
		return;
	}
	stick->error = 0;
	stick->turn = 1;
}

void check_input_line(stick_t *stick)
{
	if (stick->line > stick->nb_line || stick->line <= 0) {
		my_putstr("Error: this line is out of range\n");
		stick->error = 1;
		return;
	}
	stick->error = 0;
}

int player_turn(stick_t *stick)
{
	if (stick->error == 0)
		my_putstr("Your turn:\n");
	my_putstr("Line: ");
	if (read_input(stick, 1) == 84)
		return (84);
	if (stick->error == 0) {
		my_putstr("Matches: ");
		if (read_input(stick, 2) == 84)
			return (84);
	}
	return (0);
}
