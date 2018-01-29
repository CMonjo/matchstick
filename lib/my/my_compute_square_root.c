/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** returns the square root of the number given as argument else 0
*/

int my_compute_square_root(int nb)
{
	int a = 1;

	while (a * a < nb)
		a = a + 1;
	if (a * a == nb)
		return (a);
	return (0);
}
