/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 00:38:35 by marvin            #+#    #+#             */
/*   Updated: 2026/07/20 01:55:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == 0 || base[i + 1] == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	print_num(long nbr, char *base, int count_base)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= count_base)
	{
		print_num(nbr / count_base, base, count_base);
	}
	write(1, &base[nbr % count_base], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	count_base;

	count_base = check_base(base);
	if (count_base == 0)
		return ;
	print_num(nbr, base, count_base);
}
