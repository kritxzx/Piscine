/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 22:08:13 by marvin            #+#    #+#             */
/*   Updated: 2026/07/13 22:15:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	can;

	i = 0;
	can = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 1 && str[i] <= 31) || str[i] == 127)
			return (can);
		else
			can = 1;
		i++;
	}
	return (can);
}
