/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 09:16:27 by marvin            #+#    #+#             */
/*   Updated: 2026/07/09 09:16:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
    char w;
    char x;
    char y;
    char z;

    w = '0';
    while (w <= '9')
    {
        x = '0';
        while (x <= '8')
        {
            y = '0';
            while (y <= '9')
            {
                z = '0';
                while (z <= '9')
                {
                    write(1, &w, 1);
                    write(1, &x, 1);
                    write(1, " ", 1);
                    write(1, &y, 1);
                    write(1, &z, 1);
                    
                    if (!(w == '9' && x == '8' && y == '9' && z == '9')){
                        write(1, ", ", 2);
                    }
                    z++;
                }
                y++;
            }
            x++;
        }
        w++;
    }
}
int main(){
    ft_print_comb2();
    return 0;
}