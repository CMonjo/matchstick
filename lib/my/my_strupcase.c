/*
** EPITECH PROJECT, 2017
** my_strupcase
** File description:
** Put every letter of every word in uppercase
*/

char *my_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i += 1;
	}
	return (str);
}
