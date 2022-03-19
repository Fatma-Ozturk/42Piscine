/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:05:02 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:18:25 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || str[x] > 'Z')
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	main(void)
{
	char	alpha[] = "MAKJN";
	char	*p1;

	p1 = alpha;
	char	others[] = "anjbwx?";
	char	*p2;

	p2 = others;
	char	bos[] = "";
	char	*p3;

	p3 = bos;
	printf("%d", ft_str_is_uppercase(p1));
	printf("%d", ft_str_is_uppercase(p2));
	printf("%d", ft_str_is_uppercase(p3));
	return (0);
}
