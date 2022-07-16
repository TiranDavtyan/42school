/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:15:07 by tidavtya          #+#    #+#             */
/*   Updated: 2022/06/26 19:00:15 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unbr(unsigned int nm)
{
	int	count;

	count = 0;
	if (nm > 9)
		count += ft_print_nbr(nm / 10);
	count += ft_print_char(nm % 10 + '0');
	return (count);
}
