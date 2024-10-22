/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 05:26:53 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/03 06:26:54 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	calcul(int n)
{
	int	tab[10];
	int	cpt;

	cpt = 0;
	while (n >= 1)
	{
		tab[cpt] = (n % 10) + 48;
		cpt++;
		n = n / 10;
	}
	while (cpt >= 0)
	{
		write(1, &tab[cpt - 1], 1);
		cpt--;
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		write(1, "-", 1);
		calcul(n);
	}
	else
		calcul(n);
}
