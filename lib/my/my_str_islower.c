/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** return 1 if str contain only lowercase alphabetical characters else 0
*/

int my_str_islower(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			i += 1;
		else
			return (0);
	}
	return (1);
}
