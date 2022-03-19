/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:34:43 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:12:05 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	main(void)
{
	char	kynk[] = "kaynak";
	char	vrs[] = "varıs";
	char	*dest;

	printf("%s\n%s\n\n", kynk, vrs);
	dest = ft_strcpy(kynk, vrs);
	printf("%s\n%s\n", kynk, dest);
	return (0);
}
