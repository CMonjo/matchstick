/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** Displays a character
*/

#include <unistd.h>

void my_putchar_print(char c, int *count)
{
	(*count)++;
	write(1, &c, 1);
}
