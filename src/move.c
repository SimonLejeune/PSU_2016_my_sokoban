/*
** move.c for sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Thu Dec 15 15:03:34 2016 Simon LEJEUNE
** Last update Sun Dec 18 13:15:45 2016 LEJEUNE Simon
*/

#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "my.h"

int	moving(char *map)
{
  int	ch;
  int	player;
  int	column;

  player = find_player(map);
  while ((ch = getch()) != 27)
    {
      refresh();
      if (ch == KEY_UP)
	move_up(map, player, column);
      if (ch == KEY_LEFT)
	move_left(map, player);
      if (ch == KEY_DOWN)
	move_down(map, player, column);
      if (ch == KEY_RIGHT)
	move_right(map, player);
    }
  endwin();
  return (0);
}

int	move_up(char *map, int player, int column)
{
  
}

int	move_left(char *map, int player)
{
  
}

int	move_down(char *map, int player, int column)
{
  
}

int	move_right(char *map, int player)
{
  
}
