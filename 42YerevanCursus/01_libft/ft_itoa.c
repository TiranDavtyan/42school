/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:34:03 by tidavtya          #+#    #+#             */
/*   Updated: 2022/04/25 20:17:43 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*s;
	int				i;
	long long int	t;

	t = n;
	i = 1;
	if (t < 0 && i++)
		t = -t;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	s = (char *)malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i > 0)
	{
	s[(i--) - 1] = t % 10 + '0';
		t /= 10;
	}
	if (s[0] == '0' && s[1] != '\0')
		s[0] = '-';
	return (s);
}
