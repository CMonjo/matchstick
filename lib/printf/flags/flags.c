/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

int flags(char *str, int i, int *count)
{
	switch (str[i + 1]) {
		case '+':
			my_putchar_print('+', count);
			break;
		case ' ':
			my_putchar_print(' ', count);
			break;
		case '-':
			my_putchar_print('-', count);
			break;
		case '#':
			if (str[i + 2] == 'o')
				my_putstr_print("0", count);
			if (str[i + 2] == 'x')
				my_putstr_print("0x", count);
			if (str[i + 2] == 'X')
				my_putstr_print("0X", count);
			break;
	}
	return (0);
}
