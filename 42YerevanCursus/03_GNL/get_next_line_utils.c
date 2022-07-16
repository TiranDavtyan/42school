/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:05:34 by tidavtya          #+#    #+#             */
/*   Updated: 2022/07/08 20:48:17 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*t;

	t = (char *)malloc(sizeof(char) * (ft_strlen(s) +1));
	if (!s || !t)
		return (NULL);
	i = 0;
	while (s[i])
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	if (!str)
		return (0);
	while (str[l])
		l++;
	return (l);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*jn;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	jn = (char *)malloc(len_s1 + len_s2 + 1);
	if (!jn)
		return (0);
	while (i < len_s1)
	{
		jn[i] = s1[i];
		i++;
	}
	while (i < len_s1 + len_s2)
	{
		jn[i] = *s2;
		i++;
		s2++;
	}
	free(s1);
	jn[i] = '\0';
	return (jn);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != (unsigned char)c)
		i++;
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			len_s;
	size_t			len_start;
	unsigned int	i;

	i = 0;
	len_s = ft_strlen(s);
	len_start = ft_strlen(s + start);
	if (!s || !*s)
		return (0);
	if (len_start < len)
		len = len_start;
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	while (i < len && start + i < (unsigned int)len_s)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
