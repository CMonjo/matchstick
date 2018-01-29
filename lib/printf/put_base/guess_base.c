/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Libmy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

void uns_long(unsigned long long int nbr, int base, int *count)
{
	char b[] = "0123456789abcdef";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	long carry = 0;

	if (digit == NULL)
		exit (84);
	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr_print(my_revstr_print(digit), count);
}

void int_long(long long int nbr, int base, int *count)
{
	char b[] = "0123456789abcdef";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	long carry = 0;

	if (digit == NULL)
		exit (84);
	if (nbr < 0) {
		my_putchar_print('-', count);
		nbr *= -1;
	}
	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr_print(my_revstr_print(digit), count);
}

void uns_long_lock(unsigned long long int nbr, int base, int *count)
{
	char b[] = "0123456789ABCDEF";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	long carry = 0;

	if (digit == NULL)
		exit (84);
	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr_print(my_revstr_print(digit), count);
}

void no_printable(char *str, int *count)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 31 && str[i] < 127)
			my_putchar_print(str[i], count);
		else if (str[i] > 0 && str[i] < 8) {
			my_putstr_print("\\00", count);
			uns_long((int)str[i], 8, count);
		}
		else {
			my_putstr_print("\\0", count);
			uns_long((int)str[i], 8, count);
		}
		i++;
	}
}

void short_int(short int nbr, int base, int *count)
{
	char b[] = "0123456789abcdef";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	long carry = 0;

	if (digit == NULL)
		exit (84);
	if (nbr < 0) {
		my_putchar_print('-', count);
		nbr *= -1;
	}
	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr_print(my_revstr_print(digit), count);
}
