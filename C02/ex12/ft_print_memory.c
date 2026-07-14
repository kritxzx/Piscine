/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:10:44 by marvin            #+#    #+#             */
/*   Updated: 2026/07/14 14:30:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(unsigned long long address)
{
	char	store_add[16];
	char	*chex;
	int	i;

	chex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		store_add[i] = chex[address % 16];
		address /= 16;
		i--;
	}
	write(1, store_add, 16);
	write(1, ": ", 2);
}

void	print_hex(unsigned char *ptr, int start, int size)
{
	char	*chex;
	int	i;

	chex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (start + i < size)
		{
			write(1, &chex[ptr[start + i] / 16], 1);
			write(1, &chex[ptr[start + i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	print_ascii(unsigned char *ptr, int start, int size)
{
	int	i;
	unsigned char	c;

	i = 0;
	while (i < 16 && (start + i) < size)
	{
		c = ptr[start + i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_addr((unsigned long long)(ptr + i));
		print_hex(ptr, i, size);
		print_ascii(ptr, i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
