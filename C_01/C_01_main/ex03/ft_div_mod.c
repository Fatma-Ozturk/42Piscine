/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:37:58 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 12:56:39 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}

int	main(void)
{
	int	x = 6;
	int	y = 3;
	int	*bolu = &x
	int	*kalan = &y;

	ft_div_mod(x, y, bolu, kalan);
	printf("%d", *bolu);
	printf("%d", *kalan);
}
