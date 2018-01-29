/*
** EPITECH PROJECT, 2017
** Header file
** File description:
** libmy
*/

#ifndef _MY_H_
	#define _MY_H_
	void my_putchar(char c);
	int my_put_nbr(int nb);
	int my_putstr(char const *str);
	char *my_itoa(char *str, int nbr);
	int my_strlen(char const *str);
	int my_isneg(int nb);
	void my_swap(int *nb1, int *nb2);
	void my_sort_int_array(int *tab, int size);
	int my_compute_power_rec(int nb, int power);
	int my_compute_square_root(int nb);
	int my_is_prime(int nb);
	int my_find_prime_sup(int nb);
	char *my_strcpy(char *dest, char const *src);
	char *my_strncpy(char *dest, char const *src, int nb);
	char *my_revstr(char *str);
	char *my_strstr(char *str, char const *to_find);
	int my_strcmp(char const *s1, char const *s2);
	int my_strncmp(char const *s1, char const *s2, int nb);
	char *my_strupcase(char *str);
	char my_strlowcase(char *str);
	char *my_capitalize(char *str);
	int my_str_isalpha(char const *str);
	int my_str_isnum(char const *str);
	int my_str_islower(char const *str);
	int my_str_isupper(char const *str);
	int my_str_isprintable(char const *str);
	int my_showstr(char const *str);
	char *my_strcat(char *dest, char const *src);
	char *my_strncat(char *dest, char const *src, int nb);
	int my_putnbr_base(int nbr, char const *base);
#endif
