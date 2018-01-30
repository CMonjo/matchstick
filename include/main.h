/*
** EPITECH PROJECT, 2017
** Main
** File description:
** Header file
*/

#ifndef MAIN_H_
	#define MAIN_H_

	// INCLUDES

	#include <stdio.h>
	#include <unistd.h>
	#include <stdarg.h>
	#include <stdlib.h>
	#include <time.h>
	#include "tools.h"

	// DEFINES

	#define READ_SIZE 10000

	// STRUCTS

	typedef struct stick_s {
		int *map;
		int nb_line;
		int status;
		int len;
		int turn;
		int limit;
		int error;
		int line;
		int matches;
	} stick_t;

	//PROTOTYPES

	void display_map(stick_t *stick);
	void free_stick(stick_t *stick);
	int generate_matchstick(stick_t *stick, char **av);
	void victory_game(stick_t *stick);
	void display_error(int error);
	int read_input(stick_t *stick, int type);
	void check_input_line(stick_t *stick);
	void check_input_matches(stick_t *stick);
	int game_loop(stick_t *stick);
	void ia_turn(stick_t *stick);
	void modified_map(stick_t *stick);
	int player_turn(stick_t *stick);
#endif
