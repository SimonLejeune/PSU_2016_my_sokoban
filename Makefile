##
## Makefile for my_sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban
## 
## Made by Simon LEJEUNE
## Login   <slejeune@epitech.net>
## 
## Started on  Tue Dec  6 10:47:14 2016 Simon LEJEUNE
## Last update Thu Dec 15 16:59:49 2016 Simon LEJEUNE
##

SRC	=	src/error.c \
		src/help.c \
		src/main.c \
		src/functions.c	\
		src/window.c	

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc $(OBJ) -o $(NAME) -lncurses -I../include/

gdb	:	$(OBJ)
		gcc -O0 -ggdb3 $(SRC) -o prog -lncurses -I../include/

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
