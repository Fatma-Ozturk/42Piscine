/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmaozturk <faozturk@42kocaeli.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:33:18 by fatmaozturk       #+#    #+#             */
/*   Updated: 2022/03/19 12:33:26 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	basamak = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		basamak++;
	}
	write(1, &nb, &basamak);
}

int	main()
{
	ft_putnbr(31760);
	return(0);
}
