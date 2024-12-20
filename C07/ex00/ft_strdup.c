/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                 	  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:10:31 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/21 08:30:22 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	d = ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
