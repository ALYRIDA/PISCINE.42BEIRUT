/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:46:42 by aareslan          #+#    #+#             */
/*   Updated: 2025/04/18 20:24:01 by aareslan         ###   ########.fr       */
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
