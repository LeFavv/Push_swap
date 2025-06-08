/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 15:19:46 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/08 15:27:24 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(t_node **a, t_node **b, char **values, int string)
{
	write (1, "Error\n", 6);
	free_all(a, b, values, string);
	exit(1);
}

void	ft_free_all(t_node **a, t_node **b, char **values, int string)
{
	free_stack(a);
	free_stack(b);
	if (string == 1)
	{
		free_split(values);
		values = NULL;
	}
}