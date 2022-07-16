/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:09:00 by tidavtya          #+#    #+#             */
/*   Updated: 2022/05/01 15:30:05 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	char	*a;

	a = malloc(c * s);
	if (!a)
		return (NULL);
	ft_bzero(a, c * s);
	return (a);
}
