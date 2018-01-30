/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

char *read_input(stick_t *stick)
{
	char *buffer = NULL;

	buffer = get_next_line(0);
	if (buffer == NULL)
		return (NULL);
	if (my_str_isnum(buffer) != 1) {
		my_putstr("Error: invalid input (positive number expected)\n");
		stick->error = 1;
	} else
		return (buffer);
	return (buffer);
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

void game_loop(stick_t *stick)
{
	if (stick->turn == 0) {
		if (stick->error == 0)
			my_putstr("Your turn:\n");
		my_putstr("Line: ");
		stick->line = my_getnbr(read_input(stick));
		check_input_line(stick);
		if (stick->error == 0) {
			my_putstr("Matches: ");
			stick->matches = my_getnbr(read_input(stick));
			check_input_matches(stick);
		}
	} else {
			my_putstr("AI’s turn...\n");
			ia_turn(stick);
		}
	if (stick->error == 0)
		modified_map(stick);
}

// void display_error(int error)
// {
// 	if (error == 1)
// 		my_putstr("Line: ");
// 	if (error == 2)
// 		my_putstr("Matches: ");
// }
//
//
//
// char *read_input(int error)
// {
// 	char *buffer = NULL;
//
// 	buffer = get_next_line(0);
// 	if (buffer == NULL)
// 		return (NULL);
// 	if (my_str_isnum(buffer) != 1) {
// 		my_putstr("Error: invalid input (positive number expected)\n");
// 		display_error(error);
// 		read_input(error);
// 	} else
// 		return (buffer);
// 	return (buffer);
// }
//
// void game_loop(stick_t *stick)
// {
// 	if (stick->turn == 0) {
// 		if (stick->error == 0)
// 			my_putstr("Your turn:\n");
// 		my_putstr("Line: ");
// 		stick->line = my_getnbr(read_input(1));
// 		check_input_line(stick);
// 		my_putstr("Matches: ");
// 		stick->matches = my_getnbr(read_input(2));
// 		check_input_matches(stick);
// 	} else {
// 		my_putstr("AI’s turn...\n");
// 		ia_turn(stick);
// 	}
// 	if (stick->error == 0)
// 		modified_map(stick);
// }
