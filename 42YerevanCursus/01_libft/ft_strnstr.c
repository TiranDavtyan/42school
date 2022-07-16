/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:43:07 by tidavtya          #+#    #+#             */
/*   Updated: 2022/03/23 22:44:11 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*b, const char *s, size_t ln)
{
	size_t	i;
	int		j;
	int		l;

	i = 0;
	l = 0;
	while (s[l])
		l++;
	if (l == 0)
		return ((char *)b);
	while (b[i] && i < ln)
	{
		j = 0;
		if (b[i] == s[j])
		{
			while (i + j < ln && b[i + j] == s[j])
			{
				j++;
				if (!s[j])
					return ((char *)b + i);
			}
		}
		i++;
	}
	return (NULL);
}
