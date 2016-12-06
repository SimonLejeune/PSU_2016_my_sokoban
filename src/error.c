/*
** error.c for my_sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Tue Dec  6 19:38:27 2016 Simon LEJEUNE
** Last update Tue Dec  6 20:49:53 2016 Simon LEJEUNE
*/

#include <unistd.h>

int	error(int ac, char **av)
{
  if (ac != 2)
    {
      write (2, "Wrong arguments\n", 16);
      return (84);
    }
  else if (av[1][0] != '-' && av[1][1] != 'h')
      {
	write (2, "Wrong arguments\n", 16);
	return (84);
      }
  return (0);
}
