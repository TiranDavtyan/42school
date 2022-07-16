/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:35:54 by tidavtya          #+#    #+#             */
/*   Updated: 2022/02/16 22:05:06 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	k;

	k = *a;
	*a = *b;
	*b = k;
}

void	ft_sort_int_tab(int	*tab, int size)
{
	int	j;

	j = 0;
	while (j < size - 1)
	{
		if (tab[j] > tab[j + 1])
		{
			swap(&tab[j], &tab[j + 1]);
			if (j != 0)
				j--;
		}
		else
		{
			j++;
		}
	}
}
