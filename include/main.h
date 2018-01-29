/*
** EPITECH PROJECT, 2017
** Main
** File description:
** Header file
*/

#ifndef MAIN_H_
	#define MAIN_H_
	#include <stdio.h>
	#include <unistd.h>
	#include <stdarg.h>
	#include <stdlib.h>
	#include <time.h>
	#include "tools.h"
	#include "stick.h"
	void display_map(stick_t *stick);
	void free_stick(stick_t *stick);
	int generate_matchstick(stick_t *stick, char **av);
	void victory_game(stick_t *stick);
#endif
