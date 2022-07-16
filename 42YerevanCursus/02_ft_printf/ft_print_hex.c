/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:21:57 by tidavtya          #+#    #+#             */
/*   Updated: 2022/06/21 23:48:25 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nm, char c)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (nm < 16)
	{
		if (nm > 9 && c == 'X')
			count += ft_print_char(hex[nm] - 32);
		else
			count += ft_print_char(hex[nm]);
	}
	else
	{
		count += ft_print_hex(nm / 16, c);
		count += ft_print_hex(nm % 16, c);
	}
	return (count);
}
