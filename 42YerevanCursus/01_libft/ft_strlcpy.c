/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:39:18 by tidavtya          #+#    #+#             */
/*   Updated: 2022/04/22 00:41:30 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t s)
{
	size_t	l;
	size_t	i;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (s < 1)
		return (l);
	while (i < s - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < s)
		dst[i] = '\0';
	return (l);
}
