/*
** move.c for sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Thu Dec 15 15:03:34 2016 Simon LEJEUNE
** Last update Tue Dec 20 20:12:58 2016 LEJEUNE Simon
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

  keypad(stdscr, TRUE);
  player = find_player(map);
  while ((ch = getch()) != 27)
    {
      refresh();
      if (ch == KEY_UP)
	player = move_up(map, player);
      if (ch == KEY_LEFT)
	player = move_left(map, player);
      if (ch == KEY_DOWN)
	player = move_down(map, player);
      if (ch == KEY_RIGHT)
	player = move_right(map, player);
    }
  endwin();
  return (0);
}

int	move_up(char *map, int player)
{
  int	tmp;
  int	tmp2;
  int	len;

  len = my_strlen(map) + 1;
  tmp = player - len;
  tmp2 = player - (len * 2);
  if (map[tmp] != '#')
    {
      if (map[tmp] == 'X' && map[tmp2] != 'X')
	tmp -= len;
      if (map[tmp] != '#' && map[tmp] != 'X')
	{
	  map[tmp] = 'X';
	  map[player] = ' ';
	  player -= len;
	  map[player] = 'P';
	  clear();
	  printw(map);
	}
    }
  return (player);
}

int	move_left(char *map, int player)
{
  int	tmp;
  int	tmp2;

  tmp = player - 1;
  tmp2 = player - 2;
  if (map[tmp] != '#')
    {
      if (map[tmp] == 'X' && map[tmp2] != 'X')
	tmp -= 1;
      if (map[tmp] != '#' && map[tmp] != 'X')
	{
	  map[tmp] = 'X';
	  map[player] = ' ';
	  player--;
	  map[player] = 'P';
	  clear();
	  printw(map);
	}
    }
  return (player);
}

int	move_down(char *map, int player)
{
  int	tmp;
  int	tmp2;
  int	len;

  len = my_strlen(map) + 1;
  tmp = player + len;
  tmp2 = player + (len * 2);
  if (map[tmp] != '#')
    {
      if (map[tmp] == 'X' && map[tmp2] != 'X')
	tmp += len;
      if (map[tmp] != '#' && map[tmp] != 'X')
	{
	  map[tmp] = 'X';
	  map[player] = ' ';
	  player += len;
	  map[player] = 'P';
	  clear();
	  printw(map);
	}
    }
  return (player);
}

int	move_right(char *map, int player)
{
  int	tmp;
  int	tmp2;

  tmp = player + 1;
  tmp2 = player + 2;
  if (map[tmp] != '#')
    {
      if (map[tmp] == 'X' && map[tmp2] != 'X')
	tmp += 1;
      if (map[tmp] != '#' && map[tmp] != 'X')
	{
	  map[tmp] = 'X';
	  map[player] = ' ';
	  player++;
	  map[player] = 'P';
	  clear();
	  printw(map);
	}
    }
  return (player);
}
