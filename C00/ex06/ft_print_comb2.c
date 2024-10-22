/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamoin <marvin@42.fr>                    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:52:52 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/03 06:25:15 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int c)
{
	int	d;
	int	u;

	d = 0;
	u = 0;
	if (c < 10)
	{
		c = c + 48;
		write(1, "0", 2);
		write(1, &c, 1);
	}
	else
	{
		d = (c / 10) + 48;
		u = (c % 10) + 48;
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

void	ft_print_comb2(void)
{
	int	tab[2];

	tab[0] = 0;
	while (tab[0] < 99)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] < 100)
		{
			if (tab[1] > tab[0])
			{
				put_char(tab[0]);
				write(1, " ", 2);
				put_char(tab[1]);
				if (tab[0] != 98 || tab[1] != 99)
					write(1, ", ", 2);
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
