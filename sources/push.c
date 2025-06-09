/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 17:44:13 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/09 14:26:27 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);

void	pa(t_node **a, t_node **b)
{
	ft_printf("pa\n");
	push(a, b);
}

void	pb(t_node **a, t_node **b)
{
	ft_printf("pb\n");
	push(b, a);
}

void    push(t_node **stack_one, t_node **stack_two)
{
	if (!stack_two || !*stack_two)
		return ;
 
	t_node *value_two;

	value_two = *stack_two;
	*stack_two = (*stack_two)->next;
	ft_lstadd_front(stack_one, value_two);
}