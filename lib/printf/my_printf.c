/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

int my_specifiers(char *str, int *i, va_list list, int *count)
{
	if (str[(*i) + 1] == 'h') {
		(*i)++;
		if (str[(*i) + 1] == 'h') {
			(*i)++;
			specifier_hh(str, i, list, count);
			return (0);
		}
		specifier_h(str, i, list, count);
		return (0);
	}
	if (str[(*i) + 1] == 'l') {
		(*i)++;
		if (str[(*i) + 1] == 'l') {
			(*i)++;
			specifier_long_ll(str, i, list, count);
			return (0);
		}
		specifier_long_l(str, i, list, count);
		return (0);
	}
	specifier_simple(str, *i, list, count);
	return (0);
}

int compare(char *str, int *i, va_list list, int *count)
{
	if (str[(*i) + 1] == '+' || str[(*i) + 1] == '-' || str[(*i) + 1] == ' '
		|| str[(*i) + 1] == '#' || str[(*i) + 1] == '0') {
		flags(str, *i, count);
		(*i)++;
	}
	if ((str[(*i) + 1] <= 48 && str[(*i) + 1] >= 57) ||
		str[(*i) + 1] == '*') {
		(*i)++;
	}
	if (str[(*i) + 1] == '.' && str[(*i) + 2] <= 48 &&
		str[(*i) + 2] >= 57) {
		(*i)++;
	}
	my_specifiers(str, i, list, count);
	(*i)++;
	return (0);
}

int my_printf(char *str, ...)
{
	va_list list;
	int i = 0;
	int count = 0;

	va_start(list, str);
	while (str[i] != '\0') {
		if (str[i] == '%') {
			compare(str, &i, list, &count);
		} else
			my_putchar_print(str[i], &count);
		i++;
		va_end(list);
	}
	return (count);
}
