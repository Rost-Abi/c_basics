/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abi <abi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:38:41 by abi               #+#    #+#             */
/*   Updated: 2024/04/13 21:42:29 by abi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char letter = 'z';
    while (letter >= 'a')
        ft_putchar(letter--);
}

int main(){
    ft_print_reverse_alphabet();
    ft_putchar('\n');
}