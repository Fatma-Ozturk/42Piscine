/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:44:07 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:17:34 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'a' || str[x] > 'z')
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	main(void)
{
	char	alpha[] = "asdfg";
	char	*p1;

	p1 = alpha;
	char	others[] = "AS?-é";
	char	*p2;

	p2 = others;
	char	bos[] = "";
	char	*p3;

	p3 = bos;
	printf("%d", ft_str_is_lowercase(p1));
	printf("%d", ft_str_is_lowercase(p2));
	printf("%d", ft_str_is_lowercase(p3));
	return (0);
}
