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
		stick->turn = 0;
	}
	else
		fill_data(stick, buffer, type);
	free(buffer);
	return (0);
}

int player_turn(stick_t *stick)
{
	stick->line = 0;
	stick->matches = 0;
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
