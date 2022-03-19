/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:39:11 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 12:55:26 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	*********ptr1;
	int	********ptr2;
	int	*******ptr3;
	int	******ptr4;
	int	*****ptr5;
	int	****ptr6;
	int	***ptr7;
	int	**ptr8;
	int	*ptr9;
	int	m;

	ptr9 = &m;
	ptr8 = &ptr9;
	ptr7 = &ptr8;
	ptr6 = &ptr7;
	ptr5 = &ptr6;
	ptr4 = &ptr5;
	ptr3 = &ptr4;
	ptr2 = &ptr3;
	ptr1 = &ptr2;
	ft_ultimate_ft(ptr1);
	printf("%d", m);
	return (0);
}
