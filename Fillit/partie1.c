/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partie1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:49:03 by mkrebs            #+#    #+#             */
/*   Updated: 2016/12/12 14:04:38 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int	control_part(char *str)
{
	char	**tab;

	if (control_str(str) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	tab = ft_split_tetri2(str);
	if (control_tab(tab) == 0 || control_tab2(tab) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	if (ft_control(tab, 0, 0, 0) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}
