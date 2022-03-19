/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:06:29 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:29:43 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		a;

	a = 0;
	while (src[a])
		a++;
	dest = malloc(sizeof(src) * a);
	a = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[a])
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
		return (dest);
	}
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strdup("Fatma Ozturk"));
	return (0);
}
