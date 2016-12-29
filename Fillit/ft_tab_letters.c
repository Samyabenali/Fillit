/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_letters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:16:38 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/07 18:37:28 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_tab_letters(char ***tab)
{
	int i;
	int j;
	int k;

	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j] != NULL)
		{
			k = 0;
			while (tab[i][j][k] != '\0')
			{
				if (tab[i][j][k] == '#')
					tab[i][j][k] = 65 + i;
				k++;
			}
			j++;
		}
		i++;
	}
	return (i);
}
