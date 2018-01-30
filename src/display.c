/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

//if colonne <= nb_lign - lign -> print ' '



void display_map(stick_t *stick)
{
	for (int i = 0; i != (stick->len + 2); my_putstr("*"), i++);
	my_putstr("\n");
	for (int h = 0, i = 0; h < stick->nb_line; h++, i = 0) {
		my_putstr("*");
		for (int j = 0; j < stick->nb_line - (h + 1); j++, i++)
			my_putstr(" ");
		for (int j = 0; j < stick->map[h]; j++, i++)
			my_putstr("|");
		for (; i < stick->len; i++)
			my_putstr(" ");
		my_putstr("*\n");
	}
	for (int i = 0; i != (stick->len + 2); my_putstr("*"), i++);
	my_putstr("\n\n");
}
