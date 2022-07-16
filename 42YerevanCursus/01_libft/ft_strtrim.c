/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:13:13 by tidavtya          #+#    #+#             */
/*   Updated: 2022/05/03 21:11:07 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}	
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trm;
	size_t	j;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	j = 0;
	end = ft_strlen(s1);
	while (s1[start])
	{
		if (!(check(s1[start], set)))
			break ;
		start++;
	}
	end--;
	while (end > 0)
	{
		if (!(check(s1[end], set)))
			break ;
		end--;
	}
	trm = ft_substr(s1, start, end - start + 1);
	return (trm);
}
