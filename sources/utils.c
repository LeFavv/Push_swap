/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:27:56 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/11 02:39:59 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *find_min(t_node *stack);
t_node  *find_max(t_node *stack);
long	ft_atol(const char *str);

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
