/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:32:22 by sait-ben          #+#    #+#             */
/*   Updated: 2016/12/08 16:04:16 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		display(char **newmap)
{
	int i;

	i = 0;
	while (newmap[i])
	{
		ft_putstr(newmap[i]);
		i++;
	}
	return (0);
}

int		sizer(t_tablist *list, int size, char *str)
{
	list->tetri = ft_split_tetri(str);
	list->tetri = ft_topleft(list->tetri);
	list->count = ft_tab_letters(list->tetri);
	while (size * size < list->count * 4)
		size++;
	return (size);
}

int		main(int argc, char **argv)
{
	char		*str;
	int			size;
	t_tablist	list;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	if (lecture(argv[1]) == 0)
		return (0);
	str = lecture(argv[1]);
	if (control_part(str) == 0)
		return (0);
	size = sizer(&list, 0, str);
	(list.newmap) = gener_map(size, 0);
	backtrack(&list, 0, 0, size);
	while (search_tetri(list.newmap, (list.count - 1), size) == -1)
	{
		size++;
		free(list.newmap);
		(list.newmap) = gener_map(size, 0);
		backtrack(&list, 0, 0, size);
	}
	return (display(list.newmap));
}
