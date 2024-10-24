/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:23:21 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/18 08:14:58 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	write(1, "\\", 2);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	hexadecimal(char *str, int i, int d, int u)
{
	if (str[i] >= 0 && str[i] <= 9)
	{
		d = (str[i] / 16) + 48;
		u = (str[i] % 16) + 48;
	}
	else if (str[i] >= 16 && str[i] <= 25)
	{
		d = (str[i] / 16) + 48;
		u = (str[i] % 16) + 48;
	}
	else if (str[i] >= 10 && str[i] <= 15)
	{
		d = (str[i] / 16) + 48;
		u = (str[i] % 16) + 87;
	}
	else if (str[i] >= 26 && str[i] <= 31)
	{
		d = (str[i] / 16) + 48;
		u = (str[i] % 16) + 87;
	}
	ft_putchar(d, u);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	d;
	int	u;

	i = 0;
	d = 0;
	u = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
			hexadecimal(str, i, d, u);
		else
			write(1, &str[i], 1);
		i++;
	}
}
