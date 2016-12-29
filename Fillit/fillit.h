/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:43:08 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/08 14:24:00 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct		s_result
{
	char			***tetri;
	char			**newmap;
	int				count;
	int				ok;
}					t_tablist;

typedef struct		s_coord
{
	int				i;
	int				j;
	int				x;
	int				y;
}					t_cacalist;

size_t				ft_nb_tetri(char *str);
char				*lecture(char *argv);
int					control_str(char *str);
int					control_tab(char **tab);
int					control_part(char *str);
char				***ft_split_tetri(char *str);
char				**ft_split_tetri2(char *str);
int					control_tab2(char **tab);
char				**create_base();
char				**gener_map(int size, int i);
int					test_position(char **tetri, char **map, int pos_x,
					int pos_y);
void				place_tetri(char **tetri, char **map, int pos_x,
					int pos_y);
void				delete_tetri(char **map, int num_tetri);
char				**ft_stop(char **tab);
char				**ft_sleft(char **tab);
char				***ft_topleft(char ***tab);
int					control_tetri(char **str);
int					ft_control(char **tab, int i, int j, int ok);
int					verify_haut(char *tab, int j);
int					verify_gauche(char *tab, int j);
int					verify_bas(char *tab, int j);
int					verify_droite(char *tab, int j);
int					ft_tab_letters(char ***tab);
int					backtrack(t_tablist *list, int pos, int i, int size);
int					search_next(char **tetri, char **newmap, int pos, int size);
char				**mainback(char ***tetri, int count);
int					search_tetri(char **newmap, int i, int size);
int					display(char **newmap);

#endif
