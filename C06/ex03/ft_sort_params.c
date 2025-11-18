/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:37:37 by aareslan          #+#    #+#             */
/*   Updated: 2025/04/22 11:20:54 by aareslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_cmp(char *a, char *s)
{
	int	i;

	i = 0;
	while (a[i] && s[i] && a[i] == s[i])
		i++;
	return (a[i] - s[i]);
}

void	ptstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_print(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ptstr(argv[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (ft_cmp(av[i], av[j]) < 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print(ac, av);
}
