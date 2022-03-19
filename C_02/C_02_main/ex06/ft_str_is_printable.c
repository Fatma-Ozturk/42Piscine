/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:24:21 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:20:10 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	main(void)
{
	char	print[] = "jnxk789?=0*";
	char	*p1;

	p1 = print;
	char	unprint[] = "	";
	char	*p2;

	p2 = unprint;
	char	bos[] = "";
	char	*p3;

	p3 = bos;
	printf("%d", ft_str_is_printable(p1));
	printf("%d", ft_str_is_printable(p2));
	printf("%d", ft_str_is_printable(p3));
	return (0);
}
