/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 21:58:13 by marvin            #+#    #+#             */
/*   Updated: 2026/07/18 01:41:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;
	unsigned int	j;

	size_dest = count(dest);
	size_src = count(src);
	if (size <= size_dest)
		return (size + size_src);
	i = 0;
	j = size_dest;
	while (src[i] != '\0' && (size_dest + i) < (size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size_dest + size_src);
}
