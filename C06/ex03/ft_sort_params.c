/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:03:31 by hramamon          #+#    #+#             */
/*   Updated: 2023/12/21 03:01:22 by hramamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	s;
	int	tmp;

	i = 1;
	while (i < argc)
	{
		j = i+1;
		while ( j < argc)
		{
			s = ft_strcmp(argv[i], argv[j]);
			if (s >= 0)
			{
				tmp = *argv[i];
				argv[i] = argv[j];
				*argv[j] = tmp;	
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0' && j < argc)
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
