/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:17:25 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/16 15:48:49 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			a = 1;
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			a = 1;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			a = 1;
		else
			a = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && a == 1)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && a == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
