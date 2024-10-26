/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:02:31 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/20 20:14:34 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int	nb)
{
	int	i;
	int	cpt;

	i = 1;
	cpt = 0;
	while(i <= nb / 2)
	{
		if (nb % i == 0)
			cpt++;
		i++;
	}
	if (cpt == 1)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(15));
}
