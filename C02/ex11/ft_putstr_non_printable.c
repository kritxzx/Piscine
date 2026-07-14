/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:16:20 by marvin            #+#    #+#             */
/*   Updated: 2026/07/14 13:09:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int count(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

void	ft_putstr_non_printable(char *str)
{
	int i;
	char *cHex;

	i = 0;
	cHex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] >= 1 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			write(1, &cHex[str[i] / 16], 1);
			write(1, &cHex[str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
