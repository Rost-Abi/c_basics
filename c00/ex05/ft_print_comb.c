/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abi <abi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:13:27 by abi               #+#    #+#             */
/*   Updated: 2024/04/13 22:27:45 by abi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){ write(1, &c, 1); }

void ft_putnum(int n) { ft_putchar(n + '0'); }

void ft_print_comb(void)
{
    int a, b, c;

    a = 0;
    while(a <= 9)
    {
        b = a + 1;
        while (b <= 9)
        {
            c = b + 1;
            while (c <= 9)
            {
                ft_putnum(a);
                ft_putnum(b);
                ft_putnum(c);
                write(1, ", ", 2);
                ++c;
            }
            ++b;
        }
        ++a;
    }
}

int main()
{
    ft_print_comb();
    ft_putchar('\n');
}