/*
** EPITECH PROJECT, 2017
** my_sort_int_array.c
** File description:
** met in order croissant an array
*/

void my_sort_int_array(int *tab, int size)
{
	int i = 0;
	int swap;

	while (i < size) {
		if (tab[i] > tab[i + 1] && i < (size - 1)) {
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}
