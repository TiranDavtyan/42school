/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:18:37 by tidavtya          #+#    #+#             */
/*   Updated: 2022/03/22 22:51:51 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*st;
	unsigned char		ch;
	size_t				i;

	st = s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (st[i] == ch)
			return ((char *)st + i);
		i++;
	}
	return (NULL);
}
