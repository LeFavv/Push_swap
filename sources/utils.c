/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:27:56 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/09 17:34:43 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *find_min(t_node *stack);
t_node  *find_max(t_node *stack);

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
t_node  *find_min(t_node *stack)
{
    t_node  *current;
    t_node  *min_nbr;
    int     min;
    
    current = stack;
    min_nbr = NULL;
    min = INT_MAX;
    
    while (current)
    {
        if (current->nbr < min)
        {
            min_nbr = current;
            min = current->nbr;
        }
        current = current->next;
    }
    return (min_nbr);
}
