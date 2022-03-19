/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:51:06 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 15:22:27 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	x;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	x = 1;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		if (str[x] <= 'z' && str[x] >= 'a')
		{
			if (!(str[x - 1] >= 'a' && str[x - 1] <= 'z'))
			{
				if (!(str[x - 1] >= '0' && str[x - 1] <= '9'))
				{
					if (!(str[x - 1] <= 'Z' && str[x - 1] >= 'A'))
					{
						str[x] -= 32;
					}
				}
			}
		}
		x++;
	}
	return (str);
}

int	main(void)
{
	char	cap1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(cap1));
}
