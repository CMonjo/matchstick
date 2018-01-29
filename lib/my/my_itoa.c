/*
** EPITECH PROJECT, 2017
** my_itoa
** File description:
** Convert int to str
*/

#include "main.h"

char *my_itoa(char *str, int nbr)
{
	int tmp = nbr;
	int end_str = 0;

	while (tmp > 0) {
		tmp = tmp / 10;
		end_str++;
	}
	str[end_str] = '\0';
	while (end_str--) {
		str[end_str] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}
