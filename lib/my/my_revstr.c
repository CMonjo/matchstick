/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** Reverse a string
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_revstr(char *str)
{
	int i = 0;
	int a = 0;
	char str2[496];

	while (str[i] != '\0') {
		str2[i] = str[i];
		i++;
	}
	i--;
	while (i >= 0) {
		str[a] = str2[i];
		i--;
		a++;
	}
	return (str);
}
