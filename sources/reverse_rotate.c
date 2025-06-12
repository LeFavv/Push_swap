/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:15:40 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/12 10:40:45 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void    reverse_rotate(t_node **stack);

void    reverse_rotate(t_node **stack)
{
    t_node *prev;
    t_node *last;
    
    if (!stack || !(*stack) || !(*stack)->next)
        return ;
    
    prev = NULL;
    last = *stack;
    
    while (last->next != NULL)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = (*stack);
    *stack = last;
}

void	rra(t_node **a)
{
    ft_printf("rra\n");
    reverse_rotate(a);
}

void	rrb(t_node **b)
{
    ft_printf("rrb\n");
    reverse_rotate(b);

}

void	rrr(t_node **a, t_node **b)
{
    ft_printf("rrr\n");
    reverse_rotate(a);
    reverse_rotate(b);
}
