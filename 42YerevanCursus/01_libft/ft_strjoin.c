/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:21:24 by tidavtya          #+#    #+#             */
/*   Updated: 2022/03/26 20:55:40 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
	jn[i] = '\0';
	return (jn);
}
