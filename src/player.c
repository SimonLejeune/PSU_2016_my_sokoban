/*
** player.c for sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Thu Dec 15 15:18:47 2016 Simon LEJEUNE
** Last update Sat Dec 17 14:53:40 2016 LEJEUNE Simon
*/

int	find_player(char *map)
{
  int	i;
  int	perso;

  i = 0;
  perso = 0;
  while (map[i] != '\0')
    {
      if (map[i] == 'P')
	perso = i;
      i++;
    }
  return (perso);
}

int	find_object(char *map)
{
  int	i;
  int	X;
  int	O;

  i = 0;
  X = 0;
  O = 0;
  while (map[i] != '\0')
    {
      if (map[i] == 'X')
	X++;
      if (map[i] == 'O')
	O++;
      i++;
    }
  if (X >= 0)
    return (0);
  else
    return (1);
}
