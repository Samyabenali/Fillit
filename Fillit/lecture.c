/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:23:24 by sait-ben          #+#    #+#             */
/*   Updated: 2016/12/08 16:04:03 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <fcntl.h>

char	*lecture(char *argv)
{
	int		fd;
	int		ret;
	char	*tmp;
	char	buffer[2];
	char	*str;

	if ((fd = open(argv, O_RDONLY)) == -1)
	{
		ft_putstr("error");
		return (0);
	}
	if (!(str = ft_strnew(1)))
		return (0);
	while ((ret = read(fd, buffer, 1)))
	{
		buffer[1] = '\0';
		tmp = str;
		str = ft_strjoin(str, buffer);
		free(tmp);
	}
	return (str);
}
