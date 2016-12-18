/*
** main.c for my_sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Tue Dec  6 19:37:11 2016 Simon LEJEUNE
** Last update Fri Dec 16 17:08:55 2016 LEJEUNE Simon
*/

#include "../include/my.h"

int	main(int ac, char **av)
{
  char	*map;
  int	i;

  if (av[1][0] == '-' && av[1][1] == 'h')
    help();
  else
    {
      map = reading(av[1]);
      moving(map);
    }
}
