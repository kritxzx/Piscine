/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 22:34:03 by marvin            #+#    #+#             */
/*   Updated: 2026/07/13 23:11:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkVer(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int newWord;
	int check;

	i = 0;
	newWord = 1;
	while (str[i] != '\0')
	{
		check = checkVer(str[i]);
			if (check != 0)
			{
				if (check == 1 && newWord == 1)
					str[i] = str[i] - 32;
				else if (check == 2 && newWord == 0)
					str[i] = str[i] + 32;
				newWord = 0;
			}
			else
				newWord = 1;
			i++;
	}
	return (str);
}
