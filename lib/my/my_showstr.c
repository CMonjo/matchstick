/*
** EPITECH PROJECT, 2017
** day07
** File description:
** day07
*/

#include "my.h"

int	my_showstr(char const *str)
{
	char	my_stock[3];
	int		i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32) {
			my_putchar('\\');
			my_stock[0] = (str[i] / 16) + 48;
			if (my_stock[0] > '9')
				my_stock[0] = my_stock[0] + 39;
			my_stock[1] = (str[i] % 16) + 48;
			if (my_stock[1] > '9')
				my_stock[1] = my_stock[1] + 39;
			my_stock[2] = '\0';
			my_putstr(my_stock);
		} else
			my_putchar(str[i]);
		i++;
	}
	return (0);
}
