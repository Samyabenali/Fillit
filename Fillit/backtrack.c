/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 10:32:41 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/08 14:09:51 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		backtrack(t_tablist *list, int pos, int i, int size)
{
	while (pos < (size * size - 1))
	{
		if (search_tetri(list->newmap, list->count - 1, size) != -1)
			return (1);
		if (test_position(list->tetri[i], list->newmap,
					pos / size, pos % size) == 1)
		{
			place_tetri(list->tetri[i], list->newmap, pos / size, pos % size);
			if (backtrack(list, 0, i + 1, size))
				return (1);
			else
				delete_tetri(list->newmap, i);
		}
		pos++;
	}
	return (0);
}
