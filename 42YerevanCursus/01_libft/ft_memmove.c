/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:24:29 by tidavtya          #+#    #+#             */
/*   Updated: 2022/03/21 23:24:59 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*st1;
	char	*st2;
	size_t	i;

	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	if (st1 > st2)
	{
		while (n--)
		{
			st1[n] = st2[n];
		}
	}
	else
	{
		while (i < n)
		{
			st1[i] = st2[i];
			i++;
		}
	}
	return (s1);
}
