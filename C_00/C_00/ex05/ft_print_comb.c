/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:31:21 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 12:38:50 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar3(char yuz, char on, char bir)
{
	write(1, &yuz, 1);
	write(1, &on, 1);
	write(1, &bir, 1);
	if (yuz == '7' && on == '8' && bir == '9')
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	yuz;
	char	on;
	char	bir;

	yuz = '0';
	while (yuz <= '7')
	{
		on = yuz + 1;
		while (on <= '8')
		{
			bir = on + 1;
			while (bir <= '9')
			{
				ft_putchar3(yuz, on, bir);
				bir++;
			}
			on++;
		}
		yuz++;
	}
}
