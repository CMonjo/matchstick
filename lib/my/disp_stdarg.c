/*
** EPITECH PROJECT, 2017
** disp_stdarg
** File description:
** .c
*/

#include "my.h"
#include <stdarg.h>

int	disp_stdarg(char *s, ...)
{
	va_list list;
	int i = 0;

	va_start(list, s);
	while (s[i] != '\0') {
		switch (s[i]) {
		case 'c':
			my_putchar(va_arg(list, int));
			my_putchar('\n');
			break;
		case 's':
			my_putstr(va_arg(list, char *));
			my_putchar('\n');			
			break;
		case 'i':
			my_put_nbr(va_arg(list, int));
			my_putchar('\n');
			break;
		default:
			break;	
		}
		i++;
	}
	va_end(list);
	return (0);
}
