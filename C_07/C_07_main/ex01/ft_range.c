/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:36:49 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:30:25 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	a;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		a = 0;
		while (min < max)
		{
			tab[a] = min;
			a++;
			min++;
		}
		return (tab);
	}
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	*tab;

	tab = ft_range(42, 46);
	a = 0;
	while (a < 4)
	{
		printf("%d ", tab[a]);
		a++;
	}
}
