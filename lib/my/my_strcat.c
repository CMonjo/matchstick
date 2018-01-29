/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** Concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
	int cpt = 0;
	int cpt2 = 0;

	while (dest[cpt] != '\0') {
		cpt += 1;
	}
	while (src[cpt2] != '\0') {
		dest[cpt] = src[cpt2];
		cpt++;
		cpt2++;
	}
	dest[cpt + 1] = '\0';
	return (dest);
}
