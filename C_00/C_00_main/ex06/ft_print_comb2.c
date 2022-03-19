/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmaozturk <faozturk@42kocaeli.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:32:22 by fatmaozturk       #+#    #+#             */
/*   Updated: 2022/03/19 12:32:41 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)

{
char a = '0';
char b = '0';
char c = '0';
char d = '1';

while (a <= '9')
{
	while (b <= '9')
	{
		while (c <= '9')
		{
			while (d <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, " ",1);
				write(1, &c, 1);
				write(1, &d, 1);
				if (a == '9' && b == '8' && c == '9' && d == '9')
				{
					return;
				}
				else
				{
					write(1, ", ",2);
				}
				d++;
			}
			c++;
			d = '0';
		}
		b++;
		c = '0';
		d = '0';
	}
	a++;
	b = '0';
	c = '0';
	d = '0';
}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
