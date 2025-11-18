/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:12:34 by aareslan          #+#    #+#             */
/*   Updated: 2025/04/13 20:26:48 by aareslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print_rush(int i, int j, int x, int y)
{
	if ((i > 1 && i < x) && (j > 1 && j < y))
		ft_putchar(' ');
	else if ((i > 1 && i < x) && (j == 1 || j == y))
		ft_putchar('*');
	else if ((((i == 1) || (i == x)) && (j > 1 && j < y)))
		ft_putchar('*');
	else if (j == 1)
	{
		if (i == 1)
			ft_putchar('/');
		else
			ft_putchar('\\');
	}
	else if (j == y)
	{
		if (i == 1)
			ft_putchar('\\');
		else
			ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
	{
		return ;
	}
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			print_rush(i, j, y, x);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
