/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:42:13 by aareslan          #+#    #+#             */
/*   Updated: 2025/04/12 19:42:19 by aareslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print_rush(int i, int j, int x, int y)
{
	if ((i > 1 && i < x) && (j > 1 && j < y))
		ft_putchar(' ');
	else if ((i > 1 && i < x) && (j == 1 || j == y))
		ft_putchar('B');
	else if ((i == 1 || i == x) && (j > 1 && j < y))
		ft_putchar('B');
	else if (i == 1)
		ft_putchar('A');
	else
		ft_putchar('C');
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
