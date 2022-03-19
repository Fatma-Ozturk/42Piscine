/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:55:00 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:15:43 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A' || str[x] > 'Z') && (str[x] < 'a' || str[x] > 'z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	main(void)
{
	char	alpha[] = "ahdsij";
	char	*p1;

	p1 = alpha;
	char	others[] = "--?";
	char	*p2;

	p2 = others;
	char	bos[] = "";
	char	*p3;

	p3 = bos;
	printf("%d", ft_str_is_alpha(p1));
	printf("%d", ft_str_is_alpha(p2));
	printf("%d", ft_str_is_alpha(p3));
	return (0);
}
