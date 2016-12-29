/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:03:05 by sait-ben          #+#    #+#             */
/*   Updated: 2016/12/06 16:44:58 by mkrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	place_tetri(char **tetri, char **map, int pos_x, int pos_y)
{
	int i;
	int j;
	int x;
	int y;

	i = 0;
	j = 0;
	x = pos_x;
	y = pos_y;
	while (i < 4)
	{
		j = 0;
		y = pos_y;
		while (j < 4)
		{
			if (tetri[i][j] != '.')
				map[x][y] = tetri[i][j];
			j++;
			y++;
		}
		i++;
		x++;
	}
}
