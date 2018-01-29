/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** Copies a string into another
*/

#include "printf.h"

char *my_strcpy_print(char *dest, char const *src)
{
	int cpt = 0;

	while (cpt <= my_strlen_print(src)) {
		dest[cpt] = src[cpt];
		cpt += 1;
	}
	dest[cpt] = '\0';
	return (dest);
}
