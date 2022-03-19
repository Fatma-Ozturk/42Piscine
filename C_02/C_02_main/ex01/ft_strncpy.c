/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:58:57 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:12:50 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

int	main(void)
{
	char	kynk[] = "kaynak";
	char	vrs[] = "varıs";
	unsigned int	n;

	n = 3;
	printf("%s\n%s\n\n", kynk, vrs);
	ft_strncpy(vrs, kynk, n);
	printf("%s\n%s\n\n", kynk, vrs);
	return (0);
}
