/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 08:17:31 by marvin            #+#    #+#             */
/*   Updated: 2026/07/09 08:17:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    int start;
    start = 57;

    while (start >= 48)
    {
        write(1, &start, 1);
        start--;
    }
}

int main()
{
    ft_print_numbers();
    return 0;
}