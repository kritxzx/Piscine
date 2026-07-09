/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:06:09 by marvin            #+#    #+#             */
/*   Updated: 2026/07/09 14:06:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb == 0)
    {
        write(1, "0", 1);
    }

    int tmp[12];
    int i = 0;
    while (nb > 9)
    {
        tmp[i] = nb % 10;
        i++;
        nb = nb / 10;
    }
    tmp[i] = nb;

    while (i >= 0)
    {
        tmp[i] = tmp[i] + '0';
        write(1, &tmp[i], 1);
        i--;
    }
}

int main(){
    ft_putnbr(123645);
    return 0;
}