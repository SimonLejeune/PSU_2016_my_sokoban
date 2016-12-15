/*
** window.c for my_sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Tue Dec  6 17:38:31 2016 Simon LEJEUNE
** Last update Thu Dec 15 17:07:45 2016 Simon LEJEUNE
*/

#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	nb_line(char *map)
{
  FILE	*fp;
  char	*line;
  int	nb_line;
  size_t	len;
  ssize_t	read;

  line = NULL;
  len = 0;
  fp = fopen(map, "r");
  while ((read = getline(&line, &len, fp)) != -1)
    nb_line++;
  fclose(fp);
  return (nb_line);
}

int	nb_column(char *map)
{
  FILE	*fp;
  char	*line;
  int	nb_column;
  size_t	len;
  ssize_t	read;

  line = NULL;
  len = 0;
  fp = fopen(map, "r");
  while ((read = getline(&line, &len, fp)) != -1)
    nb_column = read;
  fclose(fp);
  return (nb_column);
}

char	*reading(char *map)
{
  int	fd;
  int	ch;
  int	row;
  int	col;
  int	size;
  char	*buff;

  initscr();
  noecho();
  fd = open(map, O_RDONLY);
  row = nb_line(map);
  col = nb_column(map);
  size = row * col;
  buff = malloc(sizeof(char*) * size);
  read(fd, buff, size);
  mvprintw(0, 0, buff);
  while ((ch = getch()) != 32)
    refresh();
  endwin();
  return (buff);
}
