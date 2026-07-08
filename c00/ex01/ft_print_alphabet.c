/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 23:52:23 by marvin            #+#    #+#             */
/*   Updated: 2026/07/08 23:52:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    int start;
    start = 97;

    while (start <= 122)
    {
        write(1, &start, 1);
        start++;
    }
}

int main(){
    ft_print_alphabet();
    return 0;
}