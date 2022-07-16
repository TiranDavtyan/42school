/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:16:19 by tidavtya          #+#    #+#             */
/*   Updated: 2022/03/22 22:57:55 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *st1, const void *st2, size_t n)
{
	size_t				i;
	unsigned const char	*s1;
	unsigned const char	*s2;

	i = 0;
	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
