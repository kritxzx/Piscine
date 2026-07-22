/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 20:18:24 by marvin            #+#    #+#             */
/*   Updated: 2026/07/20 20:27:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

// int main(void)
// {
// 	int num = 5;
// 	int checker;

// 	int result = ft_iterative_factorial(num);
// 	checker = 0;
// 	while (checker < result)
// 	{
// 		write(1, "*", 1);
// 		checker++;
// 	}
// 	return (0);
// }
