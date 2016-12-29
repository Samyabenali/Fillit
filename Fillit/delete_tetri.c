/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:32:19 by sait-ben          #+#    #+#             */
/*   Updated: 2016/12/06 16:30:58 by mkrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

void	delete_tetri(char **map, int num_tetri)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 0;
	a = num_tetri + 65;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\n')
		{
			if (map[i][j] == a)
				map[i][j] = '.';
			j++;
		}
		i++;
	}
	return ;
}

int		search_next(char **tetri, char **newmap, int pos, int size)
{
	int i;
	int j;

	i = pos / size;
	j = pos % size;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (test_position(tetri, newmap, i, j) == 1)
				return (i * size + j);
			j++;
		}
		i++;
	}
	return (-1);
}

int		search_tetri(char **newmap, int i, int size)
{
	int j;
	int k;

	j = 0;
	while (j < size)
	{
		k = 0;
		while (k < size)
		{
			if (newmap[j][k] == i + 65)
				return (j * size + k);
			k++;
		}
		j++;
	}
	return (-1);
}
