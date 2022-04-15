##
## EPITECH PROJECT, 2021
## My_sort_word_array
## File description:
## Makefile
##

SRC			=	$(shell find source/ -name "*.c")

SRC_TEST 	=	$(shell find source/ -name "*.c" ! -iname "main.c") \
				$(shell find tests/ -name "*.c")

INC	=	-I./include

CFLAGS = $(INC) -Wall -Wextra -Wpedantic

CFLAGS_TEST = $(INC) -Wall -Wextra -Wpedantic --coverage

#CFLAGS += -fsanitize=address -ggdb3

OBJ	=	$(SRC:.c=.o)

OBJ_TEST =	$(SRC_TEST:.c=.o)

NAME		=	my_sokoban

NAME_TEST	=	unit_test

all:	$(OBJ)	$(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -lncurses
	@echo -e "\033[01;38;5;10m================ Compiling: Done =======\
	=========\033[0;0m"
	make clean

clean:
	@rm -f $(OBJ)
	@echo -e "\e[91m================  clean: Done =========\
	=======\033[0;0m"

clean_tests:
	@rm -f $(OBJ_TEST)

fclean:		clean
	@rm -f $(NAME)
	@rm -f $(OBJ_TEST)
	@echo -e "\e[91m================ fclean: Done ==========\
	======\033[0;0m"

re:			fclean all

tests_run:	$(OBJ_TEST)	$(NAME_TEST)

$(NAME_TEST): $(OBJ_TEST)
	@gcc -o $(NAME_TEST) $(OBJ_TEST) $(CFLAGS_TEST) -lcriterion --coverage $(INC) -lncurses
	@echo -e "\033[01;38;5;10m================ Compiling: Done =======\
	=========\033[0;0m"
# make clean
# make clean_tests
	./unit_test

.PHONY: re clean fclean all tests_run
