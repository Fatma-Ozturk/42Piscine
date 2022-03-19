/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:51:55 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:57:53 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	son;

	x = 0;
	y = 1;
	son = 0;
	while ((str[x] >= '\t' && str[x] <= '\r') || str[x] == ' ')
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			y *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		son = (str[x] - '0') + (son * 10);
		x++;
	}
	return (son * y);
}

int	main(void)
{
	printf("%d", ft_atoi("     -----+++++---42--++++fat123"));
}
