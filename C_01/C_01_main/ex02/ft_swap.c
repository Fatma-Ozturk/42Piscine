/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:09:31 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 12:56:04 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

int	main(void)
{
	int	m = 5;
	int	n = 6;
	int	*p = &m;
	int	*r = &n;

	ft_swap(p, r);
	printf("%d", *p);
	printf("%d", *r);
}
