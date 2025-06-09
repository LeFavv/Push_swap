/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 09:01:42 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/09 15:34:57 by vafavard         ###   ########.fr       */
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
		if (!check_duplicates(*a, (int)nbr))
			ft_error(a, b, values, string);
		nbr = ft_atol(values[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_error(a, b, values, string);
		new = ft_lstnew((int)nbr);
		if (!new)
			ft_error(a, b, values, string);
		lst_add_back(a, new);
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
		if (!is_digit(str[i]))
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

long	ft_atol(const char *str)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	check_duplicates(t_node *stack, int value)
{
	while(stack)
	{
		if (stack->next == value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	stack_sorted(t_node **stack)
{
	t_node *current;

	if (!stack)
		return (1);
	current = *stack;
	while (current->nbr < current->next->nbr)
	{
		if (current->next->next == NULL)
			return (1);
	}
	return (0);
}
