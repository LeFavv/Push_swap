/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:48:28 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/13 19:20:30 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_to(t_node **a, t_node **b);
void	sort_2(t_node **a);
void	sort_3(t_node **a);
void	sort_4(t_node **a, t_node **b);
void	sort_5(t_node **a, t_node **b);

void	send_to(t_node **a, t_node **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 1)
		sort_2(a);
	else if (size == 2)
		sort_3(a);
	else if (size == 3)
		sort_4(a, b);
	else if (size == 4)
		sort_5(a, b);
	else if (size > 4)
		radix_sort(a, b);
	if (stack_sorted(a))
		return ;
}

void	sort_2(t_node **a)
{
	if (!stack_sorted(a))
		sa(a);
}

void	sort_3(t_node **a)
{
	t_node	*max_number;

	if (stack_sorted(a))
		return ;
	max_number = find_max(*a);
	if ((*a)->nbr == max_number->nbr)
		ra(a);
	else if ((*a)->next->nbr == max_number->nbr)
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void	sort_4(t_node **a, t_node **b)
{
	t_node	*min_nbr;

	if (stack_sorted(a))
		return ;
	min_nbr = find_min(*a);
	if ((*a)->nbr == min_nbr->nbr)
		pb(a, b);
	else if ((*a)->next->nbr == min_nbr->nbr)
	{
		ra(a);
		pb(a, b);
	}
	else
	{
		while ((*a)->nbr != min_nbr->nbr)
			rra(a);
		pb(a, b);
	}
	if (!stack_sorted(a))
		sort_3(a);
	pa(a, b);
}

void	sort_5(t_node **a, t_node **b)
{
	t_node	*min_nbr;

	if (stack_sorted(a))
		return ;
	min_nbr = find_min(*a);
	if ((*a)->nbr == min_nbr->nbr)
		pb(a, b);
	else if ((*a)->next->nbr == min_nbr->nbr)
	{
		ra(a);
		pb(a, b);
	}
	else
	{
		while ((*a)->nbr != min_nbr->nbr)
			rra(a);
		pb(a, b);
	}
	if (!stack_sorted(a))
		sort_4(a, b);
	pa(a, b);
}
