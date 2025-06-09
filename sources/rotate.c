/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 17:45:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/09 15:12:45 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void    rotate(t_node **stack);

void    rotate(t_node **stack)
{
   t_node   *first;
   t_node   *last;

   first = *stack;
   *stack = first->next;
   first->next = NULL;
   last = ft_lstlast(*stack);
   last->next = first;
}
void    ra(t_node **a)
{
    ft_printf("ra\n");
    rotate(a);
}

void	rb(t_node **b)
{
    ft_printf("rb\n");
    rotate(b);
}

void rr(t_node **a, t_node **b)
{
    ft_printf("rr\n");
    rotate(a);
    rotate(b);
}

