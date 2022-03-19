/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:16:04 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 12:53:33 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	empty;

	a = 0;
	while (a < (size / 2))
	{
	empty = tab[a];
	tab[a] = tab[size - 1 - a];
	tab[size - 1 - a] = empty;
	a++;
	}
}
