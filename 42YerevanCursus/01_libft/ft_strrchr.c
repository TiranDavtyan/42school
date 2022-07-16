/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:48:29 by tidavtya          #+#    #+#             */
/*   Updated: 2022/03/29 00:26:31 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = -1;
	ptr = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			j = i;
		}
		i++;
	}	
	if (c == 0)
		return ((char *)str + i);
	if (j != -1)
		return ((char *)str + j);
	return (ptr);
}
