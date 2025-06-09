/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:27:56 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/09 17:28:08 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
