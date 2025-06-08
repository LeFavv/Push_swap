/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 08:02:04 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/08 17:50:40 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	char 	**values;
	int		string;

	string = 0;
	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		values = ft_split(argv[1], ' ');
		string = 1;
	}
	else
		values = &argv[1];
	init_stack_a(&a, &b, values, string);
	//sort
	//un algo pour 2 swap a
	//un algo pour 3
	//un algo pour 4
	//un algo pour 5
	//un algo pour plus de 5	
	return (free_all(a, b, values, string), 0);
}
