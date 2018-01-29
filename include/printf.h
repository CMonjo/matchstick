/*
** EPITECH PROJECT, 2017
** Header file
** File description:
** my_printf
*/

#ifndef _MY_PRINTF_
	#define _MY_PRINTF_
	#include <stdarg.h>
	void my_putchar_print(char c, int *count);
	char *my_strcpy_print(char *dest, char const *src);
	int my_putstr_print(char const *str, int *count);
	int my_strlen_print(char const *str);
	char *my_revstr_print(char *str);
	int my_printf(char *str, ...);
	int specifier_long_l_2(char *str, int *i, va_list list, int *count);
	int specifier_long_ll_2(char *str, int *i, va_list list, int *count);
	int flags(char *str, int i, int *count);
	int specifier_long_l(char *str, int *i, va_list list, int *count);
	int specifier_long_ll(char *str, int *i, va_list list, int *count);
	int specifier_h(char *str, int *i, va_list list, int *count);
	int specifier_h_2(char *str, int *i, va_list list, int *count);
	int specifier_simple(char *str, int i, va_list list, int *count);
	int specifier_uns(char *str, int i, va_list list, int *count);
	int specifier_uns_2(char *str, int i, va_list list, int *count);
	int specifier_hh(char *str, int *i, va_list list, int *count);
	int specifier_hh_2(char *str, int *i, va_list list, int *count);
	void uns_long(unsigned long long int nbr, int base, int *count);
	void int_long(long long int nbr, int base, int *count);
	void uns_long_lock(unsigned long long int nbr, int base, int *count);
	void short_int(short int nbr, int base, int *count);
	void uns_short(unsigned short int nbr, int base, int *count);
	void uns_short_lock(unsigned short int nbr, int base, int *count);
	void sign_char(signed char nbr, int base, int *count);
	void uns_char(unsigned char nbr, int base, int *count);
	void uns_char_lock(unsigned char nbr, int base, int *count);
	void no_printable(char *str, int *count);
#endif
