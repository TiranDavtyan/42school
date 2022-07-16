/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:24:57 by tidavtya          #+#    #+#             */
/*   Updated: 2022/02/06 20:38:51 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putnline(void);

void	line1(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		j++;
	}
	ft_putnline();
	j = 1;
}

void	line2(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		j++;
	}
	ft_putnline();
	j = 1;
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			line1(x);
		}
		else
		{
			line2(x);
		}
		i++;
	}
}
