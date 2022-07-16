/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:12:02 by tidavtya          #+#    #+#             */
/*   Updated: 2022/04/05 01:15:51 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*t;
	int		l;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	t = (char *)malloc((l + 1) * sizeof(char));
	if (!t)
		return (NULL);
	while (i < l)
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
