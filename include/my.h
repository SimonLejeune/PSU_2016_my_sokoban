/*
** my.h for my_sokoban in /home/slejeune/Unix_System_Prog/PSU_2016_my_sokoban/include
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Tue Dec  6 19:30:38 2016 Simon LEJEUNE
** Last update Tue Dec 20 20:12:43 2016 LEJEUNE Simon
*/

#ifndef		MY_H_
#define		MY_H_

void	my_putchar(char);
void	my_putstr(char*);
int	my_strlen(char*);
int	help();
int	error(int, char**);
char	*reading(char*);
int	moving(char*);
int	find_player(char*);
int	move_up(char*, int);
int	move_left(char*, int);
int	move_down(char*, int);
int	move_right(char*, int);
int	nb_line(char*);
int	nb_column(char*);

#endif
