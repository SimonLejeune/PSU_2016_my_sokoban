/*
** move.c for sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Thu Dec 15 15:03:34 2016 Simon LEJEUNE
** Last update Thu Dec 15 17:06:30 2016 Simon LEJEUNE
*/

#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	moving(char *map, int i)
{
  int	ch;

  while ((ch = getch()) != 32)
    {
      refresh();
      if (ch == KEY_UP)
	move_up(map, i);
      if (ch == KEY_LEFT)
	move_left(map, i);
      if (ch == KEY_DOWN)
	move_down(map, i);
      if (ch == KEY_RIGHT)
	move_right(move, i);
    }
}

int	move_up(char *map, int i)
{
  
}

int	move_left(char *map, int i)
{
  
}

int	move_down(char *map, int i)
{
  
}

int	move_right(char *map, int i)
{
  
}
