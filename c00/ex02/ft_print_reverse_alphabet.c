/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 00:09:44 by marvin            #+#    #+#             */
/*   Updated: 2026/07/09 00:09:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    int start;
    start = 122;

    while (start >= 97)
    {
        write(1, &start, 1);
        start--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
