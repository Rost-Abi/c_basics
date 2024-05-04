/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abi <abi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:19:09 by abi               #+#    #+#             */
/*   Updated: 2024/04/26 21:33:50 by abi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Create a function which reverses a given array of integer (first goes last, etc).
// The arguments are a pointer to int and the number of ints in the array.
// Here's how it should be prototyped :

void ft_swap(int*, int*);
// 1 2 3 4 5 6 7 8 9 10 
void ft_rev_int_tab(int *tab, int size)
{
    int start = 0, end = size - 1;

    while (start < end)
        ft_swap(&tab[start++], &tab[end--]); 
}

void print_array(int *array, int size)
{
    int i = 0;

    while (i < size)
    {
        printf("%d, ", array[i++]);
    }
    printf("\n");
}

int main()
{
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ft_rev_int_tab(tab, 10);
    // should print the reversed array
    print_array(tab, 10);
}

void ft_swap(int *a, int *b)
{
    if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}