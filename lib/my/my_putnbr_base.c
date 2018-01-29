/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Libmy
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
	int len = my_strlen(base);
	int result = 0;
	char digit;

	if (nbr < 0) {
		my_putchar('-');
		nbr = nbr * -1;
	}
	digit = base[nbr % len];
	result = nbr / len;
	if (result != 0)
		my_putnbr_base(result, base);
	my_putchar(digit);
	return (0);

	return (nbr);
}
