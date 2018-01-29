/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

void display_map(stick_t *stick)
{
	static int space = 0;
	int pipe = 0;
	int miss_space = 0;

	for (int i = 0; i != (stick->len + 2); my_putstr("*"), i++);
	my_putstr("\n");
	for (int i = 0; stick->map[i] != -1; my_putstr("*\n"), i++) {
		miss_space = 0;
		pipe = stick->map[i];
		space = (stick->len / 2) - (stick->map[i] / 2);
		my_putstr("*");
		for (; space != 0; my_putstr(" "), space--, miss_space++);
		for (; pipe != 0; my_putstr("|"), pipe--, miss_space++);
		space = stick->len / 2 + 1;
		for (; miss_space != stick->len; my_putstr(" "), miss_space++);
	}
	for (int i = 0; i != (stick->len + 2); my_putstr("*"), i++);
	my_putstr("\n\n");
}
