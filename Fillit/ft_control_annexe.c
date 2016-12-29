/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_annexe.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:21:07 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/06 16:34:13 by mkrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	verify_haut(char *tab, int j)
{
	if (tab[j - 5] != '#')
		return (0);
	return (1);
}

int	verify_gauche(char *tab, int j)
{
	if (tab[j - 1] != '#')
		return (0);
	return (1);
}

int	verify_bas(char *tab, int j)
{
	if (tab[j + 5] != '#')
		return (0);
	return (1);
}

int	verify_droite(char *tab, int j)
{
	if (tab[j + 1] != '#')
		return (0);
	return (1);
}
