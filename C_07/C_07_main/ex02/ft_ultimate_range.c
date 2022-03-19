/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:05:47 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:31:06 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		a = 0;
		while (min < max)
		{
			tab[a] = min;
			min++;
			a++;
			*range = tab;
		}
		return (a);
	}
}

#include <stdio.h>

int	main(void)
{
	int	*range;
	int	a;

	a = 0;
	printf("%d\n", ft_ultimate_range(&range, -4, 2));
	while (a < 6)
	{
		printf("%d ", range[a]);
		a++;
	}
	return (0);
}
