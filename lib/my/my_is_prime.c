/*
** EPITECH PROJECT, 2017
** my is prime
** File description:
** my_isprime
*/

int my_is_prime(int nb)
{
	int x = 2;
	int div;

	if (nb == 2147483647)
		return (1);
	if (nb <= 1 || nb > 2147483647)
		return (0);
	while (x < nb ) {
		div = nb % x;
		if (div == 0)
			return (0);
		x++;
	}
	return (1);
}
