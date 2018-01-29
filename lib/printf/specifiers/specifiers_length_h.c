/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

int specifier_h(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'i':
		case 'd':
			short_int((short int)va_arg(list, int), 10, count);
			break;
		case 'u':
			uns_short((unsigned short int)va_arg(list,
				int), 10, count);
			break;
	}
	specifier_h_2(str, i, list, count);
	return (0);
}

int specifier_h_2(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'o':
			uns_short((unsigned short int)va_arg(list,
				int), 8, count);
			break;
		case 'x':
			uns_short((unsigned short int)va_arg(list,
				int), 16, count);
			break;
		case 'X':
			uns_short_lock((unsigned short int)va_arg(list,
				int), 16, count);
			break;
	}
	return (0);
}

int specifier_hh(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'i':
		case 'd':
			sign_char((signed char)va_arg(list, int), 10, count);
			break;
		case 'u':
			uns_char((unsigned char)va_arg(list,
				int), 10, count);
			break;
	}
	specifier_hh_2(str, i, list, count);
	return (0);
}

int specifier_hh_2(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'o':
			uns_char((unsigned char)va_arg(list,
				int), 8, count);
			break;
		case 'x':
			uns_char((unsigned char)va_arg(list,
				int), 16, count);
			break;
		case 'X':
			uns_char_lock((unsigned char)va_arg(list,
				int), 16, count);
			break;
	}
	return (0);
}
