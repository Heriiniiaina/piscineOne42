/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:38:37 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/20 16:52:53 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int po;

	i = 1;
	po = 1;
	if (power <= 0)
		return (1);
	while (i <= power)
	{
		po *= nb;
		i++;
	}
	return (po);
}

int	main(void)
{
	printf("%d",ft_iterative_power(5,2));
}
