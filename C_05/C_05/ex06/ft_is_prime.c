/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:42:25 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:13:12 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb > 2)
	{
		while (n < nb)
		{
			if (nb % n == 0)
			{
				return (0);
			}
			n++;
		}
		return (1);
	}
	return (-1);
}
