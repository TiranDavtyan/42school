/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:25:08 by tidavtya          #+#    #+#             */
/*   Updated: 2022/06/26 19:01:18 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switch_format(const char *str, int *p, va_list ap)
{
	int	count;
	int	i;

	i = *p;
	count = 0;
	if (str[++i] == 'c')
		count = ft_print_char(va_arg(ap, int));
	else if (str[i] == 's')
		count = ft_print_str(va_arg(ap, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		count = ft_print_nbr(va_arg(ap, int));
	else if (str[i] == '%')
		count = ft_print_char('%');
	else if (str[i] == 'u')
		count = ft_print_unbr(va_arg(ap, unsigned int));
	else if (str[i] == 'p')
	{
		count += ft_print_str("0x");
		count += ft_print_pt(va_arg(ap, unsigned long long int));
	}
	else if (str[i] == 'x' || str[i] == 'X')
		count = ft_print_hex(va_arg(ap, unsigned int), str[i]);
	*p = i;
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] && str[i] != '%')
			count += ft_print_char(str[i]);
		else
			count += ft_switch_format(str, &i, ap);
		i++;
	}	
	va_end (ap);
	return (count);
}
