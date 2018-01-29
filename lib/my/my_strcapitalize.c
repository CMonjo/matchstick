/*
** EPITECH PROJECT, 2017
** strcapitalize
** File description:
** task 9
*/

void my_up_case(int count, char *str)
{
	if (str[count + 1] > 64 && str[count + 1] < 91)
		str[count + 1] = (str[count + 1] + 32);
}

void my_up_low(int count, char *str)
{
	if (str[count] > 64 && str[count] < 91)
		my_up_case(count, str);
	else if (str[count] > 47 && str[count] < 58)
		my_up_case(count, str);
	else if (str[count] > 96 && str[count] < 123)
		my_up_case(count, str);
}

char *my_strcapitalize(char *str)
{
	int count = 0;

	while (str[count] != '\0') {
		if (str[count] > 91 && str[count] < 123)
			str[count] = (str[count] - 32);
		count ++;
	}
	count = 0;
	while (str[count] != '\0') {
		my_up_low(count, str);
		count ++;
	}
	return (str);
}
