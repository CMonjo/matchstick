/*
** EPITECH PROJECT, 2017
** Project matchstick
** File description:
** Main file
*/

#include "main.h"

void display_error(int error)
{
	if (error == 1)
		my_putstr("Line: ");
	if (error == 2)
		my_putstr("Matches: ");
}

char *read_input(int error)
{
	char *buffer = NULL;

	buffer = get_next_line(0);
	if (buffer == NULL)
		return (NULL);
	if (my_str_isnum(buffer) != 1) {
		my_putstr("Error: le buffer n'est pas un chiffre\n");
		display_error(error);
		read_input(error);
	} else
		return (buffer);
	my_putstr(buffer);
	return (buffer);
}


// char *read_input(int error)
// {
// 	size_t read = 0;
// 	int fd = 0;
// 	char *buffer = NULL;
//
// 	fd = getline(&buffer, &read, stdin);
// 	if (buffer[fd - 1] == '\n')
// 		buffer[fd - 1] = '\0';
// 	if (my_str_isnum(buffer) != 1) {
// 		my_putstr("Error: le buffer n'est pas un chiffre\n");
// 		display_error(error);
// 		read_input(error);
// 	} else {
// 		return (buffer);
// 	}
// 	return (buffer);
// }
