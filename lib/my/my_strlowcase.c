/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** Put every letter of every word in lowercase
*/

char *my_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i += 1;
	}
	return (str);
}
