/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abi <abi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:37:34 by abi               #+#    #+#             */
/*   Updated: 2024/05/04 18:34:14 by abi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*
• Create a function which sorts an array of integers by ascending order.
• The arguments are a pointer to int and the number of ints in the array.
• Here’s how it should be prototyped :
*/
void ft_swap(int *a, int *b)
{
    if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

void ft_sort_int_tab(int *tab, int *size)
{
 int i = 0;
  while (i < size -1)
  {
    if(tab[i] > tab[i + 1])
        ft_swap(&tab[i], &tab[i + 1]);
  }
}

int main()
{
    int arr[] = {10, 7, 5, 1, 3};
    ft_sort_int_tab(arr, sizeof(arr)/*/ sizeof(int)*/);
    for(int i = 0; i < 5; i++)
        printf("%d, ", arr[i]);
}