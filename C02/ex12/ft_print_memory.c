/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:58:21 by aareslan          #+#    #+#             */
/*   Updated: 2025/04/27 00:07:11 by aareslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	xy_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned char	*cursor;
	char			*hex_symbols;

	cursor = (unsigned char *)addr;
	hex_symbols = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		xy_putchar(hex_symbols[cursor[i] / 16]);
		xy_putchar(hex_symbols[cursor[i] % 16]);
		if ((i + 1) % 2 == 0)
			xy_putchar(' ');
		i++;
	}
	return (addr);
}
