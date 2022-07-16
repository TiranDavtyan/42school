/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:14:22 by tidavtya          #+#    #+#             */
/*   Updated: 2022/06/15 22:05:26 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long long int	nm;
	int				count;

	nm = n;
	count = 0;
	if (nm < 0)
	{
		count += ft_print_char('-');
		nm *= -1;
	}
	if (nm > 9)
		count += ft_print_nbr(nm / 10);
	count += ft_print_char((char)(nm % 10 + '0'));
	return (count);
}
