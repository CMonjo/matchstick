##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_printf
##

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -I ../../include/

SRC 	=	my_printf.c					\
		flags/flags.c					\
		specifiers/specifiers_defaults.c		\
		specifiers/specifiers_length_l.c		\
		specifiers/specifiers_length_h.c		\
		put_base/guess_base.c				\
		put_base/guess_base_2.c				\
		tools/my_putchar.c				\
		tools/my_putstr.c				\
		tools/my_revstr.c				\
		tools/my_strcpy.c				\
		tools/my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	../libprintf.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
