/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abi <abi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:02:02 by abi               #+#    #+#             */
/*   Updated: 2024/04/13 22:06:38 by abi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    char c;
    if (n < 0)
        c = 'N';
    else
        c = 'P';
    write(1, &c, 1);
}

int main()
{
    ft_is_negative(1);
    ft_is_negative(-23);
    ft_is_negative(0);
}