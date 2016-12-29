/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:05:53 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/08 16:47:15 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		test(char **tab, int i, int j, int ok)
{
	if (j >= 5)
		ok = ok + verify_haut(tab[i], j);
	if (j != 0 && j != 5 && j != 10 && j != 15)
		ok = ok + verify_gauche(tab[i], j);
	if (j <= 14)
		ok = ok + verify_bas(tab[i], j);
	if (j != 3 && j != 8 && j != 13 && j != 18)
		ok = ok + verify_droite(tab[i], j);
	if (ok == 0)
		return (0);
	return (ok);
}

int		*ft_control_annexe(char **tab, int i, int j)
{
	int	*str;
	int	k;

	k = 0;
	str = (int*)malloc(sizeof(int) * 4);
	while (j <= 18)
	{
		if (tab[i][j] == '#')
		{
			if (test(tab, i, j, 0) == 0)
				return (NULL);
			str[k] = test(tab, i, j, 0);
			k++;
		}
		j++;
	}
	return (str);
}

int		ft_control(char **tab, int i, int j, int ok)
{
	int		*str;
	int		k;

	str = (int*)malloc(sizeof(int) * 4);
	if (str == NULL)
		return (0);
	while (tab[i])
	{
		k = 3;
		j = 0;
		ok = 1;
		str = ft_control_annexe(tab, i, j);
		if (str == NULL)
			return (0);
		while (k >= 0)
		{
			if (str[k] >= 2)
				ok = 0;
			k--;
		}
		if (ok != 0)
			return (0);
		i++;
	}
	return (1);
}
