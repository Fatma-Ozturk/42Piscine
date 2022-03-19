/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:50:14 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:24:53 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
		x++;
	return (s1[x] - s2[x]);
}

void	ft_swap(char **a, char **b)
{
	char	*x;

	x = *a;
	*a = *b;
	*b = x;
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 1;
	while (a < ac - 1)
	{
		b = 1;
		while (b < ac - 1)
		{
			if (ft_strcmp(av[b], av[b + 1]) > 0)
			{
				ft_swap(&av[b], &av[b + 1]);
			}
			b++;
		}
		a++;
	}
	b = 1;
	while (b < ac)
	{
		ft_putstr(av[b]);
		write(1, "\n", 1);
		b++;
	}
	return (0);
}
