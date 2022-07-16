/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:06:59 by tidavtya          #+#    #+#             */
/*   Updated: 2022/05/01 15:34:38 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t	sl;
	size_t	dl;
	int		i;
	size_t	dsl;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	i = 0;
	if (s > dl)
		dsl = sl + dl;
	else
		dsl = sl + s;
	while (src[i] && dl + 1 < s)
	{
		dst[dl] = src[i];
		dl++;
		i++;
	}
	dst[dl] = '\0';
	return (dsl);
}
