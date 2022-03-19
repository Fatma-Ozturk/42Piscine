/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmaozturk <faozturk@42kocaeli.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:31:15 by fatmaozturk       #+#    #+#             */
/*   Updated: 2022/03/19 12:31:49 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
					write(1, &yuz, 1);
					write(1, &on, 1);
					write(1, &bir, 1);

					if (yuz == '7' && on == '8' && bir == '9')
					{
						return;
					}
					
					else
					{
						write(1, ", ", 2);
					}
					bir++;
				}
				on++;
			}
			yuz++;
		}
}

int	main(void)
{
ft_print_comb();
return(0);
}
