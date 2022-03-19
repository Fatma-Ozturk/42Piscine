/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:27:26 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:18:24 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)

{
	long	a;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	a = 2;
	if (nb >= 2)
	{
		while (a * a <= nb)
		{
			if (a * a == nb)
			{
				return (a);
			}
		a++;
		}
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(144));
	printf("%d", ft_sqrt(-9));
	printf("%d", ft_sqrt(0));
}
