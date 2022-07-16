/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:12:14 by tidavtya          #+#    #+#             */
/*   Updated: 2022/06/21 23:51:00 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pt(unsigned long long int nm)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (nm < 16)
		count += ft_print_char(hex[nm]);
	if (nm >= 16)
	{
		count += ft_print_pt(nm / 16);
		count += ft_print_pt(nm % 16);
	}
	return (count);
}
