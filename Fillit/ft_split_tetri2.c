/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:10:03 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/07 11:11:12 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_split_tetri2(char *str)
{
	char	**tab;
	size_t	i;
	size_t	j;

	if ((tab = malloc(sizeof(char*) * ft_nb_tetri(str) + 1)) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < ft_nb_tetri(str))
	{
		tab[j] = ft_strsub(str, i, 21);
		j++;
		i = i + 21;
	}
	tab[j] = NULL;
	return (tab);
}
