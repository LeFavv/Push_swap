/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 04:05:01 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/11 06:13:43 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    radix_sort(t_node **a, t_node **b)
{
    int i;
    int j;
    int max_bits;
    int size;
    
    i = 0;
    max_bits = 0;
    size = ft_lstsize(*a);
    while ((size - 1) >> max_bits)
        max_bits++;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if (((*a)->index >> i & 1) == 0)
                pb(a , b);
            else
                ra(a);
            j++;
        }
        while (*b)
            pa(a , b);
        i++;
    }
}