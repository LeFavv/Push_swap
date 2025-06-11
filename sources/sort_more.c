/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 04:05:01 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/11 04:11:30 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_radix_sort(t_node **a, t_node **b)
{
    int size;
    int max_bits;
    int i;
    int j;

    max_bits = 0;
    size = ft_lstsize(a);
    while ((size - 1) >> max_bits)
        max_bits++;
    
}