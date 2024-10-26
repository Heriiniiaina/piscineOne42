/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:35:12 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/21 05:08:08 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	display(int nb)
{
	int	len;
	int	tmp;
	int	nombre;

	len = 1;
	tmp = nb;
	nombre = 0;
	while (tmp > 10)
	{
		len *= 10;
		tmp /= 10;
	}
	while (len > 0)
	{
		nombre = (nb / len) + 48;
		write(1, &nombre, 1);
		nb %= len;
		len /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int	len;
	int	tmp;
	int	nombre;

	len = 1;
	tmp = nb;
	nombre = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	display(nb);
}
