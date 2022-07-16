/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:42:02 by artadevo          #+#    #+#             */
/*   Updated: 2022/04/10 16:34:27 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int ln)

{
	char			*sub;
	unsigned int			len_s;
	unsigned int			len_start;
	unsigned int	i;

	i = 0;
	len_s = ft_strlen(s);
	len_start = ft_strlen(s + start);
	if (len_start < ln)
		ln = len_start;
	sub = malloc(ln + 1);
	if (!sub)
		return (0);
	while (i < ln && start + i < (unsigned int)len_s)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

static unsigned int	ft_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	unsigned int		i;
	unsigned int		skizb;
	unsigned int		avart;

	str = (char **)malloc ((ft_count(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (0);
	i = 0;
	skizb = 0;
	avart = 0;
	while (i < ft_count(s, c))
	{
		while (s[skizb] == c)
			skizb++;
		avart = skizb;
		while (s[avart] != c && s[avart])
			avart++;
		str[i] = ft_substr(s + skizb, 0, (avart - skizb));
		skizb = avart;
		i++;
	}
	str[i] = 0;
	return (str);
}
