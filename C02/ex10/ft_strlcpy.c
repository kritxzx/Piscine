/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 23:19:00 by marvin            #+#    #+#             */
/*   Updated: 2026/07/13 23:55:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int count(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int realCount;

	i = 0;
	realCount = count(src);
	if (size == 0)
		return (realCount);
	while (src[i] != '\0' && i < (size - 1))
	{

		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (realCount);
}
