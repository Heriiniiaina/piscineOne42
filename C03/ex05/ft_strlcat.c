/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:57:34 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/20 13:50:46 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	i;
	unsigned int	j;

	ld = 0;
	ls = 0;
	j = 0;
	i = 0;
	while (dest[ld] != '\0')
		ld++;
	while (src[ls] != '\0')
		ls++;
	i = ld;
	if (size <= ld)
		return (ls + size);
	while (src[j] != '\0' && j < size - ld - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ld + ls);
}
