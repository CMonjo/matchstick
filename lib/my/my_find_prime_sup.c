/*
** EPITECH PROJECT, 2017
** c
** File description:
** c
*/

int		my_need_prime(int nb)
{
	int		i = 2;

	if (nb == 1 || nb > 214783646 || nb <= 0)
		return (0);
	while (i != nb) {
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		my_find_prime_sup (int nb)
{
	int		i = 0;

	while (i != 1) {
		i = my_need_prime(nb);
		if (i == 0)
			nb++;
	}
	return (nb);
}
