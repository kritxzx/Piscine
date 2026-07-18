/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 23:31:22 by marvin            #+#    #+#             */
/*   Updated: 2026/07/17 00:43:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int start_read(char *str)
{
	int i;
	int countspace;

	i = 0;
	countspace = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			countspace++;
		else
			return (countspace);
		i++;
	}
	return (countspace);
}

int checksym(char *str)
{
	int i;
	int count = 0;

	i = start_read(str);
	count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int i;
	int sym;
	int aws;

	i = start_read(str);
	while (str[i] == '-' || str[i] == '+')
		i++;
	sym = checksym(str);
	aws = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			aws = (aws * 10) + (str[i] - '0');
		else
			return (aws * sym);
		i++;
	}
	return (aws * sym);
}
