/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 00:57:10 by marvin            #+#    #+#             */
/*   Updated: 2026/07/22 13:54:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (result <= nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
