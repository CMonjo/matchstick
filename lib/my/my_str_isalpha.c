/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** return 1 if str contain only alphabetical characters else 0
*/

int my_str_isalpha(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if ((str[i] <= 'z' && str[i] >= 'a') ||\
		    (str[i] <= 'Z' && str[i] >= 'A'))
			i += 1;
		else
			return (0);
	}
	return (1);
}
