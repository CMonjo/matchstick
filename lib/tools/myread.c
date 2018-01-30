/*
** EPITECH PROJECT, 2017
** Project GetNextLine
** File description:
** Main file
*/

#include "tools.h"
#include "main.h"

int init_key(int key)
{
	key == 1 ? key = 0 : 0;
	key == 2 ? key = 3 : 0;

	return (key);
}

int verifkey(int key)
{
	static int k = 0;

	if (key == 2 && k == 0)
		k = 2;
	else if (key == 1 && k == 0)
		k = 1;
	else if (k != 2 && k != 1 && k != 5 && k != 4 && k != 3 && key == 0)
		k = 0;
	key == 6 ? k = 6 : 0;
	key == 3 ? k = 0 : 0;
	key == 5 ? k = 5 : 0;
	key == 4 && k != 6 ? k = 4 : 0;
	return (k);
}

char *rempl(char *new_str, char *temp, int a, int rd)
{
	static int j = 0;
	static int i = 0;
	int k = 0;

	if (a == 0) {
		i = rd == 0 ? i : 0;
		for (; temp[i] != '\n' && temp[i] != '\0';
		i++, j++)
			new_str[j] = temp[i];
		for (; temp[i] == '\n'; i++, new_str[j] = '\0', j = 0,
		k = i < rd ? 2 : 1, verifkey(k));
		for (; rd == 0 && temp[i] == '\0'; verifkey(5), rd = 1);
	} else {
		for (; temp[i] != '\0' && temp[i] != '\n'; new_str[j] =
		temp[i], j++, i++);
		for (; rd == 0 && temp[i] == '\0'; verifkey(6), rd = 1);
		for (; temp[i] == '\n'; new_str[j] = '\0', i++,
		j = 0, verifkey(4));
	}
	return (new_str);
}

char *my_read(int fd)
{
	char buffer[READ_SIZE + 1];
	char *new_str = malloc(sizeof(char) * 1000);
	static char temp[READ_SIZE + 1];
	static int key = 0;
	static int j = 0;

	for (int rd = 0; key == 0 || key == 3; temp[j] = '\0',
	new_str = rempl(new_str, temp, 0, rd), key = verifkey(0)) {
		key == 3 ? new_str = rempl(new_str, temp, 1, rd) : 0;
		for (; verifkey(0) == 4; key = 3)
			return (new_str);
		rd = read(fd, buffer, READ_SIZE);
		if (rd == -1)
			return (NULL);
		for (j = 0; j < rd && rd > 0; temp[j] = buffer[j], j++);
	}
	for (int i = 0; i == 0; i++, verifkey(3), key = init_key(key));
	for (; key == 5; free(new_str), free(temp), free(buffer))
		return (NULL);
	return (new_str);
}
