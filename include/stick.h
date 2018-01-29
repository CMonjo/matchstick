/*
** EPITECH PROJECT, 2017
** Main
** File description:
** Header file
*/

#ifndef _SHELL_H_
	#define _SHELL_H_
	#include "main.h"
	typedef struct stick_s {
		int *map;
		int *save;
		int nb_line;
		int status;
		int len;
		int turn;
		int limit;
		int error;
		int line;
		int matches;
	} stick_t;
#endif
