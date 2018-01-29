/*
** EPITECH PROJECT, 2017
** c
** File description:
** 
*/

int		my_compute_power_rec(int nb, int p)
{
	int		result = nb;

	if (p == 0)
		return (1);
	if (nb == 0 || p < 0 || nb >= 2147483647)
		return (0);
	result = nb * my_compute_power_rec(nb, p - 1);
	return (result);
}
