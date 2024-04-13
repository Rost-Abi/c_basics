/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abi <abi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:36:00 by abi               #+#    #+#             */
/*   Updated: 2024/04/13 21:36:04 by abi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// int main(){
//     ft_putchar('h');
//     ft_putchar('\n');
// }