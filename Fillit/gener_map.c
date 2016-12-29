/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gener_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:59:18 by sait-ben          #+#    #+#             */
/*   Updated: 2016/12/08 16:48:53 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdlib.h>

char	**gener_map(int size, int i)
{
	char	**tab;
	int		j;

	tab = (char**)malloc(sizeof(char*) * size + 1);
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		j = 0;
		tab[i] = (char*)malloc(sizeof(char) * (size + 2));
		if (tab[i] == NULL)
			return (NULL);
		while (j < size)
		{
			tab[i][j] = '.';
			j++;
		}
		tab[i][j] = '\n';
		j++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
