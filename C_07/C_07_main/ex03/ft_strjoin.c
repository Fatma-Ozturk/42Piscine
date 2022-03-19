/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:29:04 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:31:38 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		a;
	int		b;
	int		c;

	s = malloc(sizeof(strs));
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			s[c++] = strs[a][b++];
		}
		b = 0;
		while (sep[b] != '\0' && a != size - 1)
		{
			s[c++] = sep[b++];
		}
		a++;
	}
	s[c] = '\0';
	return (s);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	av[0] = "Fatma";
	av[1] = "Ozturk";
	av[2] = "Buyukkoz";
	printf("%s\n", ft_strjoin(3, av, " "));
}
