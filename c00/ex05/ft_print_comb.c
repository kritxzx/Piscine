/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 08:27:20 by marvin            #+#    #+#             */
/*   Updated: 2026/07/09 08:27:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    char x;
    char y;
    char z;

    x = '0';
    while (x <= '7')
    {
        y = x + 1;
        while (y <= '8')
        {
            z = y + 1;
            while (z <= '9')
            {
                write(1, &x, 1);
                write(1, &y, 1);
                write(1, &z, 1);

                if(!(x == '7' && y == '8' && z == '9')){
                    write(1, ", ", 2);
                }
                z++;
            }
            y++;
        }
        x++;
    }
}

int main(){
    ft_print_comb();
    return 0;
}