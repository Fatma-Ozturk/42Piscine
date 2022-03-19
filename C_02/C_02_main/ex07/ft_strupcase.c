/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:49:51 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:20:37 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - 32 ;
		x++;
	}
	return (str);
}

int	main(void)
{
	char	upcase[] = "ahdjahasv";
	char	*p1;

	p1 = upcase;
	char	lowcase[] = "AFDGJJ";
	char	*p2;

	p2 = lowcase;
	char	bos[] = "";
	char	*p3;

	p3 = bos;
	printf("%s", ft_strupcase(p1));
	printf("%s", ft_strupcase(p2));
	printf("%s", ft_strupcase(p3));
	return (0);
}
