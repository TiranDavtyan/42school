/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:35:54 by tidavtya          #+#    #+#             */
/*   Updated: 2022/02/16 22:06:00 by tidavtya         ###   ########.fr       */
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
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
			}
		j++;
		}
		i++;
	}
}

int	main(void)
{
	int	arr[] = {6, 9, 15, -7, 5, 16};
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 6)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(arr, 6);
	while (j < 6)
	{
		printf("%d, ", arr[j]);
		j++;
	}
}
