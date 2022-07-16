/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:17:47 by tidavtya          #+#    #+#             */
/*   Updated: 2022/02/20 14:28:06 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;
	int	j;
	int	num[][3] = 
	{
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};

	int	*num1;
	
	i = 0;
	j = 0;
	c = 0;
	if (ac != 1)
	{
		while (av[1][c])
		{
			c++;
		}

/*	
		while (j <= c)
		{
			printf("%d\n", num[j/3][j%3]);
			j++;
		}
		j = 0;
		printf("%d\n", av[1][0]-'0');

		while (j < c)
		{
			printf("%d\n", num[j/3][j%3]);
			j++;
		};
*/		
		
	
		while (i < c)
		{
			num[i/3][i%3] = av[1][i]-'0';
			i++;
		}

		while (j <= c)
		{
			printf("%d\n", num[j/3][j%3]);
			j++;
		}
		
		while (i < c)
		{
			num1[i] = av[1][i]-'0';
			i++;
		}

		while (j <= c)
		{
			printf("%d\n", num1[j]);
			j++;
		}


	}
//	printf("%d\n%d\n", ac, c);
	return (0);
}
