/*
** help.c for my_sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Tue Dec  6 19:26:21 2016 Simon LEJEUNE
** Last update Tue Dec  6 20:44:32 2016 Simon LEJEUNE
*/

#include <unistd.h>
#include "../include/my.h"

int	help()
{
  my_putstr("USAGE\n\t");
  my_putstr("./my_sokoban map\n\n");
  my_putstr("DESCRIPTION\n\t");
  my_putstr("map \tfile representing the warehouse map, containing '#' for walls,\n"); 
  my_putstr(" \t\t'P' for the player, 'X' for boxes and 'O' for storage locations.\n");
}
