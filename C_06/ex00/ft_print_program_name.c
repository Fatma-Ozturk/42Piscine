/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:19:17 by faozturk          #+#    #+#             */
/*   Updated: 2022/03/19 16:23:26 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;

	a = 0;
	if (ac > 0)
	{
		while (av[0][a] != '\0')
		{
			write(1, &av[0][a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
