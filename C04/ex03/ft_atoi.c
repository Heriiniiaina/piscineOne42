/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:26:02 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/21 05:16:05 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nombre;
	int	neg;

	i = 0;
	neg = 1;
	nombre = 0;
	while ((str[i] == 32 || str[i] == 45 || str[i] == 43)
		|| (str[i] >= 65 && str[i] <= 90)
		|| (str[i] >= 97 && str[i] <= 122)
		|| (str[i] >= 9 && str[i] <= 13))
	{
		if (str[i] == 45)
			neg *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 49 && str[i] <= 57)
			nombre = nombre * 10 + (str[i] % 48);
		else
			return (nombre * neg);
		i++;
	}
	return (nombre * neg);
}
