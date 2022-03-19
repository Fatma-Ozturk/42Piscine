/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:16:04 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 13:00:14 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	empty;

	a = 0;
	while (a < (size / 2))
	{
	empty = tab[a];
	tab[a] = tab[size - 1 - a];
	tab[size - 1 - a] = empty;
	a++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	size;

	size = 6;
	printf("%d", tab[3]);
}
