/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:33:32 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:00:15 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
		return (a);
}

int	checkerror(char *str)
{
	int	p;
	int	r;
	int	s;

	s = ft_strlen(str);
	p = 0;
	if (str[0] == '\0' || s == 1)
		return (0);
	while (str[p] != '\0')
	{
		if (str[p] <= 32 || str[p] == 127 || str[p] == 43 || str[p] == 45)
			return (0);
		r = p + 1;
		while (r < ft_strlen(str))
		{
			if (str[p] == str[r])
				return (0);
			r++;
		}
		p++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	error;
	int	nb;

	error = checkerror(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

int	main(void)
{
	ft_putnbr_base(-15, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
}
