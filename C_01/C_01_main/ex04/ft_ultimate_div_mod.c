/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:45:44 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 12:57:31 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bolu;
	int	kalan;

	if (*b != 0)
	{
	bolu = (*a) / (*b);
	kalan = (*a) % (*b);
	*a = bolu;
	*b = kalan;
	}
}

int	main(void)
{
	int	m = 20;
	int	n = 4;
	int	*x = &m;
	int	*y = &n;

	ft_ultimate_div_mod(x, y);
	printf("%d", *x);
	printf("%d", *y);
}
