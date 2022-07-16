/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:56:32 by tidavtya          #+#    #+#             */
/*   Updated: 2022/05/03 20:04:05 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t ln)

{
	char			*sub;
	size_t			len_s;
	size_t			len_start;
	unsigned int	i;

	i = 0;
	len_s = ft_strlen(s);
	len_start = ft_strlen(s + start);
	if (len_start < ln)
		ln = len_start;
	sub = malloc(ln + 1);
	if (!sub)
		return (0);
	while (i < ln && start + i < (unsigned int)len_s)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
