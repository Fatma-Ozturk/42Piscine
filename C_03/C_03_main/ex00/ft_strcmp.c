/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 04:08:53 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:34:10 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
		x++;
	return (s1[x] - s2[x]);
}

int	main()
{
	printf("%d", ft_strcmp("fatma", "fatmab"));
	printf("\n%d", ft_strcmp("fatma", "fat"));
	printf("\n%d", ft_strcmp("fat", "fatma"));
	printf("\n%d", ft_strcmp("fatma", "fatma"));
}
