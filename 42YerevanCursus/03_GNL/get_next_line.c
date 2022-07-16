/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:48:31 by tidavtya          #+#    #+#             */
/*   Updated: 2022/07/10 21:12:21 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_line(int fd, char **strpt)
{
	int		i;
	char	buf[BUFFER_SIZE + 1];

	i = 0;
	while (1)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i < 0)
			return (0);
		buf[i] = '\0';
		if (!*strpt)
			*strpt = ft_strdup(buf);
		else
			*strpt = ft_strjoin(*strpt, buf);
		if (ft_strchr(buf, '\n') || i == 0)
			break ;
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*str;
	int			i;
	char		*line;
	char		*tmp;

	if (!get_line(fd, &str))
		return (0);
	i = ft_strlen(str) - ft_strlen(ft_strchr(str, '\n')) + 1;
	line = ft_substr(str, 0, i);
	tmp = str;
	str = ft_substr(str, i, ft_strlen(str));
	free(tmp);
	return (line);
}
