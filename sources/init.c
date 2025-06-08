/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 09:01:42 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/08 15:19:17 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(t_node **a, t_node **b, char **values, int string)
{
	int i;

	i = 0;
	while (values[i])
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

t_node	*ft_lstnew(void *content)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->nbr = content;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
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