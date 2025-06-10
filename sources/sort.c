/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:48:28 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/10 20:24:13 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    send_to(t_node **a, t_node **b)
{
    int size;
    
    size = ft_lstsize(a);
    if (size == 2)
        sort_2(a);
    if (size == 3)
        sort_3(a);
    if (size == 4)
        sort_4(a, b);
    if (size == 5)
        sort_5(a, b);
    if (size > 5)
        //??
    if (stack_sorted(a))
        return ;
}

t_node  *find_max(t_node *stack)
{
    int     max;
    t_node  *max_nbr;
    t_node  *current;

    max = INT_MIN;
    current = stack;
    max_nbr = NULL;
    while (current)
    {
        if (current->nbr > max)
        {
            max_nbr = current;
            max = current->nbr;
        }
        current = current->next;
    }
    return (max_nbr);
}

void    sort_2(t_node **a)
{
    if (!stack_sorted(*a))
        sa(*a);
}

void    sort_3(t_node **a)
{
    t_node *max_number;
    
    max_number = find_max(a);
    if ((*a)->nbr == max_number->nbr)
        ra(a);
    else if ((*a)->next->nbr == max_number->nbr)
        rra(a);
    if ((*a)->nbr > (*a)->next->nbr)
        sa(a);
}