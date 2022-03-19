/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 06:45:29 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:36:51 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	dlen;
	unsigned int	slen;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	dlen = b;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[a] != '\0' && a < size - dlen -1)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dlen + slen);
}

int	main()
{
	char	src[] = "fatma ozturk";
	char	dest[] = "42";
	printf("%i \n", ft_strlcat(dest, src, 15));
	printf("%s \n", dest);
}
