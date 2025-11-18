/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:37:01 by aareslan          #+#    #+#             */
/*   Updated: 2025/04/18 20:24:04 by aareslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	j = 1;
	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (0);
	while (i < nb)
	{
		while (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (j);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	while (ft_is_prime(nb) != 1)
	{
		nb++;
		if (ft_is_prime(nb) == i)
			return (nb);
	}
	return (nb);
}
