/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:17:34 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:16:20 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < '0' || str[x] > '9')
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	main(void)
{
	char	num[] = "12356787";
	char	*p1;

	p1 = num;
	char	others[] = "10_";
	char	*p2;

	p2 = others;
	char	bos[] = "";
	char	*p3;

	p3 = bos;
	printf("%d", ft_str_is_numeric(p1));
	printf("%d", ft_str_is_numeric(p2));
	printf("%d", ft_str_is_numeric(p3));
	return (0);
}
