/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:57:08 by sait-ben          #+#    #+#             */
/*   Updated: 2016/12/08 15:14:57 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		conditions(t_cacalist lst, char **tetri, char **map, int count)
{
	if (tetri[lst.i][lst.j] != '.' && tetri[lst.i][lst.j] != '\n')
		count++;
	if ((tetri[lst.i][lst.j] != '.' && tetri[lst.i][lst.j] != '\n')
			&& (map[lst.x][lst.y] != '.' && map[lst.x][lst.y] != '\n'))
		return (-1);
	if ((tetri[lst.i][lst.j] != '.' && tetri[lst.i][lst.j] != '\n')
			&& map[lst.x][lst.y] == '\n')
		return (-1);
	return (count);
}

int		test_position(char **tetri, char **map, int pos_x, int pos_y)
{
	t_cacalist	lst;
	int			count;

	lst.i = 0;
	lst.x = pos_x;
	count = 0;
	while (lst.i < 4 && map[lst.x] != NULL)
	{
		lst.j = 0;
		lst.y = pos_y;
		while (lst.j < 4 && map[lst.x][lst.y] != '\n')
		{
			count = conditions(lst, tetri, map, count);
			if (count == -1)
				return (0);
			(lst.j)++;
			(lst.y)++;
		}
		(lst.i)++;
		(lst.x)++;
	}
	if (count != 4)
		return (0);
	return (1);
}
