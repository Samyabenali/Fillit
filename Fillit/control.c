/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:06:20 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/08 14:09:00 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		control_str(char *str)
{
	unsigned long i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
		i++;
	if (str[i - 1] == '\n' && str[i - 2] == '\n')
		return (0);
	i = 20;
	while (str[i] && i <= ft_strlen(str))
	{
		if (str[i] != '\n')
			return (0);
		i = i + 21;
	}
	if (ft_strlen(str) > 546)
		return (0);
	return (1);
}

int		control_tab(char **tab)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (j <= 19)
		{
			if (j == 4 || j == 9 || j == 14 || j == 19)
			{
				if (tab[i][j] != '\n')
					return (0);
			}
			else
			{
				if (tab[i][j] != '.' && tab[i][j] != '#')
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		control_tab2(char **tab)
{
	size_t		i;
	size_t		j;
	size_t		count;

	i = 0;
	while (tab[i])
	{
		count = 0;
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				count++;
			j++;
		}
		if (count != 4)
			return (0);
		i++;
	}
	return (1);
}
