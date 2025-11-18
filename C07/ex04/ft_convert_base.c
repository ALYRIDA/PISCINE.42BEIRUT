/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:07 by aareslan          #+#    #+#             */
/*   Updated: 2025/04/26 19:26:37 by aareslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid_base(char *base);
int	get_nbr_len(int nbr, int base_len);
int	ft_strlen(char *str);

int	get_digit_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	result;
	int	digit;
	int	base_len;

	i = 1;
	result = 0;
	base_len = ft_strlen(base);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	digit = get_digit_index(*str, base);
	while (digit != -1)
	{
		result = result * base_len + digit;
		str++;
		digit = get_digit_index(*str, base);
	}
	return (i * result);
}

char	*itoa_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	char	*result;
	long	nb;

	base_len = ft_strlen(base);
	nb = nbr;
	len = get_nbr_len(nb, base_len);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result [len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
	}
	if (nb == 0)
		result[0] = base[0];
	while (nb)
	{
		result[--len] = base[nb % base_len];
		nb /= base_len;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	num = ft_atoi(nbr, base_from);
	return (itoa_base(nbr, base_to));
}
