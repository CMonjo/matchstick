/*
** EPITECH PROJECT, 2017
** c
** File description:
** c
*/
int		my_strcmp(char const *s1, char const *s2)
{
	int		i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
