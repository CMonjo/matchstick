/*
** EPITECH PROJECT, 2017
** Project units test
** File description:
** Criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ctype.h>
#include "main.h"

void main_redirect_stdout(void)
{
	cr_redirect_stdout();
}

Test(=pname=, Return_Value_Test)
{
	cr_assert_eq("Function to test()", "Int Output..");
}

Test(=pname=, Stdout_Value_Test, .init = main_redirect_stdout)
{
//	Function to test();
	cr_assert_stdout_eq_str("Str Output..");
}

===================

// Length -> Définition du test ; str_equal_1 -> Test voulu
Test(Length, str_equal_1)
{
  cr_assert_eq(my_strlen("A"), 1);
}

Test(Length, str_equal_19)
{
  cr_assert_eq(my_strlen("Ceci est une string"), 19);
}

//Test avec erreur -> "deux" = char et j'en demande qu'un
Test(Length, str_equal_deux)
{
  cr_assert_eq(my_strlen("Deux"), 1);
}
