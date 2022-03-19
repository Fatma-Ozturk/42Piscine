/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:59:27 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:19:55 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (n <= nb / n)
		{
			if (nb % n == 0)
			{
				return (0);
			}
			n++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(999983));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(-3));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d", ft_find_next_prime(2147483647));
}
