/*
** EPITECH PROJECT, 2017
** sum_stdarg
** File description:
** .c
*/

#include <stdarg.h>
#include "my.h"
	
int	sum_stdarg(int i, int nb, ...)
{
	va_list  list;
	int result = 0;
	int j = 0;
	int stock = 0;
  
	va_start(list, nb);
	if (i == 0) {
		while (j != nb) {
			stock = va_arg(list, int);
			result =  stock + result;
			j++;
		}
      	}
	if (i == 1) {
		while (j != nb) {
			stock = my_strlen(va_arg(list, char *));
			result = stock + result;
			j++;
		}
	}	
	va_end(list);
	return (result);
}
