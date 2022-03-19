/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:22:06 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:17:01 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	son;

	son = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		son *= nb;
		power--;
	}
	return (son);
}

int	main(void)
{
	printf("%d", ft_iterative_power(3, 2));
	printf("%d", ft_iterative_power(0, 0));
	printf("%d", ft_iterative_power(1, 1));
	printf("%d", ft_iterative_power(3, 1));
	printf("%d", ft_iterative_power(0, 1));
	printf("%d", ft_iterative_power(2, 0));
}
