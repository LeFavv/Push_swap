/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 17:43:24 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/09 15:36:02 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_node **stack);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

void	sa(t_node **a)
{
    ft_printf("sa\n");
    swap(a);
}

void	sb(t_node **b)
{
    ft_printf("sb\n");
    swap(b);
}

void	ss(t_node **a, t_node **b)
{
    ft_printf("ss\n");
    swap(a);
    swap(b);
}

void    swap(t_node **stack)
{
    if (!stack || !*stack || !(*stack)->next)
        return ;

    t_node  *first;
    t_node  *second;
    
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = second;
    *stack = second;
}

