/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:10:03 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/08 16:48:06 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

size_t	ft_nb_tetri(char *str)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	***ft_split_tetri(char *str)
{
	char	***tab;
	size_t	i;
	size_t	j;

	if ((tab = (char***)malloc(sizeof(char**) *
					(ft_nb_tetri(str) + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < ft_nb_tetri(str))
	{
		tab[j] = ft_strsplit(ft_strsub(str, i, 20), '\n');
		j++;
		i = i + 21;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_stop(char **tab)
{
	int i;

	i = 0;
	while (tab[0][0] == '.' && tab[0][1] == '.'
			&& tab[0][2] == '.' && tab[0][3] == '.')
	{
		i = 0;
		while (i < 3)
		{
			ft_strcpy(tab[i], tab[i + 1]);
			i++;
		}
		tab[3] = "....";
	}
	return (tab);
}

char	**ft_sleft(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[0][0] == '.' && tab[1][0] == '.' &&
			tab[2][0] == '.' && tab[3][0] == '.')
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 3)
			{
				tab[i][j] = tab[i][j + 1];
				j++;
			}
			tab[i][3] = '.';
			i++;
		}
	}
	return (tab);
}

char	***ft_topleft(char ***tab)
{
	int	i;

	i = 0;
	while (i < ft_tab_letters(tab))
	{
		tab[i] = ft_sleft(tab[i]);
		i++;
	}
	i = 0;
	while (i < ft_tab_letters(tab))
	{
		tab[i] = ft_stop(tab[i]);
		i++;
	}
	return (tab);
}
