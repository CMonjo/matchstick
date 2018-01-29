/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

int specifier_long_l(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'i':
		case 'd':
			int_long((long long int)va_arg(list,
				long int), 10, count);
			break;
		case 'u':
			uns_long((unsigned long long int)va_arg(list,
				unsigned long int), 10, count);
			break;
	}
	specifier_long_l_2(str, i, list, count);
	return (0);
}

int specifier_long_l_2(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'o':
			uns_long((unsigned long long int)va_arg(list,
				unsigned long int), 8, count);
			break;
		case 'x':
			uns_long((unsigned long long int)va_arg(list,
				unsigned long int), 16, count);
			break;
		case 'X':
			uns_long_lock((unsigned long long int)va_arg(list,
				unsigned long int), 16, count);
			break;
	}
	return (0);
}

int specifier_long_ll(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'i':
		case 'd':
			int_long((long long int)va_arg(list,
				long long int), 10, count);
			break;
		case 'u':
			uns_long(va_arg(list,
				unsigned long long int), 10, count);
			break;
	}
	specifier_long_ll_2(str, i, list, count);
	return (0);
}

int specifier_long_ll_2(char *str, int *i, va_list list, int *count)
{
	switch (str[(*i) + 1]) {
		case 'o':
			uns_long(va_arg(list,
				unsigned long long int), 8, count);
			break;
		case 'x':
			uns_long(va_arg(list,
				unsigned long long int), 16, count);
			break;
		case 'X':
			uns_long_lock(va_arg(list,
				unsigned long long int), 16, count);
			break;
	}
	return (0);
}
