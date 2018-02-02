##
## EPITECH PROJECT, 2017
## Project 2017
## File description:
## Build matchstick binary.
##

CC	=	gcc

CFLAGS	=	-Wextra -W -Wall -I ./include/

LIB	=	-L lib/tools/ -ltools

SRC	=	src/main.c		\
		src/game_handling.c	\
		src/input.c		\
		src/error.c		\
		src/display.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib/tools/
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)
	rm -f $(OBJ)
	make clean -C ./lib/tools/

clean:
	rm -f $(OBJ)
	make clean -C ./lib/tools/

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/tools/

re: fclean all
