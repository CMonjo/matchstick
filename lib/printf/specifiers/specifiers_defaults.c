/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

int specifier_simple(char *str, int i, va_list list, int *count)
{
	switch (str[i + 1]) {
		case 'c':
			my_putchar_print(va_arg(list, int), count);
			break;
		case 's':
			my_putstr_print(va_arg(list, char *), count);
			break;
		case 'i':
		case 'd':
			int_long((long long int)va_arg(list,
				int), 10, count);
			break;
		case '%':
			my_putchar_print('%', count);
			break;
	}
	specifier_uns(str, i, list, count);
	return (0);
}

int specifier_uns(char *str, int i, va_list list, int *count)
{
	switch (str[i + 1]) {
		case 'u':
			uns_long((unsigned long long int)va_arg(list,
				unsigned int), 10, count);
			break;
		case 'p':
			my_putstr_print("0x", count);
			uns_long((unsigned long long int)va_arg(list,
				unsigned long), 16, count);
			break;
		case 'S':
			no_printable(va_arg(list, char*), count);
			break;
		case 'b':
			uns_long((unsigned long long int)va_arg(list,
				unsigned int), 2, count);
			break;
	}
	specifier_uns_2(str, i, list, count);
	return (0);
}

int specifier_uns_2(char *str, int i, va_list list, int *count)
{
	switch (str[i + 1]) {
		case 'o':
			uns_long((unsigned long long int)va_arg(list,
				unsigned int), 8, count);
			break;
		case 'x':
			uns_long((unsigned long long int)va_arg(list,
				unsigned int), 16, count);
			break;
		case 'X':
			uns_long_lock((unsigned long long int)va_arg(list,
				unsigned int), 16, count);
			break;
	}
	return (0);
}
