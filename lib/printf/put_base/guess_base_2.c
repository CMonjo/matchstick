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

void uns_short(unsigned short int nbr, int base, int *count)
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

void uns_short_lock(unsigned short int nbr, int base, int *count)
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

void sign_char(signed char nbr, int base, int *count)
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

void uns_char(unsigned char nbr, int base, int *count)
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

void uns_char_lock(unsigned char nbr, int base, int *count)
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
