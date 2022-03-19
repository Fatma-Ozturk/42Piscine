/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 04:33:23 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:34:47 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && x < n)
	{
		if (s1[x] > s2[x])
		{
			return (1);
		}
		else if (s1[x] < s2[x])
		{
			return (-1);
		}
		x++;
	}
	return (0);
}

int	main()
{
	printf("%d", ft_strncmp("fatma", "fatmaozturk", 10));
}
