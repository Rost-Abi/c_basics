/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abi <abi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:53:54 by abi               #+#    #+#             */
/*   Updated: 2024/04/13 21:56:56 by abi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c){write(1,&c,1);}

void ft_print_numbers(void)
{
    char letter = '0';
    while (letter <= '9')
        ft_putchar(letter++);
}

int main(){
    ft_print_numbers();
}