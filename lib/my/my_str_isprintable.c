/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** return 1 if str contain only printables characters else 0
*/

#include <stdio.h>

int my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < ' ' ||  str[i] > '~')
			return (0);
		i += 1;
	}
	return (1);
}
