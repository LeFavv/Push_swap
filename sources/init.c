/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 09:01:42 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/13 19:10:01 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(t_node **a, t_node **b, char **values, int string)
{
	t_node	*new;
	long	nbr;
	int		i;

	(void)b;
	i = 0;
	while (values[i])
	{
		if (!is_valid_number(values[i]))
			ft_error(a, b, values, string);
		nbr = ft_atol(values[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_error(a, b, values, string);
		if (!check_duplicates(*a, (int)nbr))
			ft_error(a, b, values, string);
		new = ft_lstnew(nbr);
		if (!new)
			ft_error(a, b, values, string);
		ft_lstadd_back(a, new);
		i++;
	}
}

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	check_duplicates(t_node *stack, int value)
{
	while (stack)
	{
		if (stack->nbr == value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	stack_sorted(t_node **stack)
{
	t_node	*current;

	if (!stack)
		return (1);
	current = *stack;
	while (current->nbr < current->next->nbr)
	{
		if (current->next->next == NULL)
			return (1);
		current = current->next;
	}
	return (0);
}
