/*
** main.c for my_sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Tue Dec  6 19:37:11 2016 Simon LEJEUNE
** Last update Tue Dec  6 20:55:32 2016 Simon LEJEUNE
*/

#include "../include/my.h"

int	main(int ac, char **av)
{
  error(ac, av);
  if (av[1][0] == '-' && av[1][1] == 'h')
    help();
}
