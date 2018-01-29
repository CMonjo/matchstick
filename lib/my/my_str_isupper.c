/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** retunr 1 if the string passed with uppercase alphabetical characters or 0
*/

int my_str_isupper(char const *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0' && str[i] < 91 && str[i] > 64) {
		i++;
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}
