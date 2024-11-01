/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:11:54 by vrandria          #+#    #+#             */
/*   Updated: 2023/12/02 14:11:17 by vrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int size, char first, char center, char last)
{
	int	counter_char;

	counter_char = 1;
	while (counter_char <= size)
	{
		if (counter_char == 1)
		{
			ft_putchar(first);
		}
		else if (counter_char == size)
		{
			ft_putchar (last);
		}
		else
		{
			ft_putchar(center);
		}
		counter_char++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter_line;

	counter_line = 1;
	if (x >= 1 && y >= 1)
	{
		while (counter_line <= y)
		{
			if (counter_line == 1 || counter_line == y)
			{
				ft_print_char(x, 'A', 'B', 'C');
			}
			else
			{
				ft_print_char(x, 'B', ' ', 'B');
			}
			counter_line++;
		}
	}
}
