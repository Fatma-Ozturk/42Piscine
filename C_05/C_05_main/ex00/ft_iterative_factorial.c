/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:41:49 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:15:30 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	son;

	son = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		son *= nb;
		nb--;
	}
	return (son);
}

int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
	printf("%i", ft_iterative_factorial(-5));
	printf("%i", ft_iterative_factorial(1));
	printf("%i", ft_iterative_factorial(0));
}
