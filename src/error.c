/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

void check_input_error(stick_t *stick)
{
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
	check_input_error(stick);
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
