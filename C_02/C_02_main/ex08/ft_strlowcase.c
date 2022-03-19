/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:23:58 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:21:21 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
				str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

int	main(void)
{
	char	lowcase[] = "JSHGFHDJ";
	char	*p1;
	p1 = lowcase;
	char	upcase[] = "asdfghj";
	char	*p2;
	p2 = upcase;
	char	bos[] = "";
	char	*p3;
	p3 = bos;
	printf("%s", ft_strlowcase(p1));
	printf("%s", ft_strlowcase(p2));
	printf("%s", ft_strlowcase(p3));
	return (0);
}
