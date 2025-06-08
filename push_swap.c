/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 08:02:04 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/08 09:09:53 by vafavard         ###   ########.fr       */
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
		return (0); //+ erreur ?
	if (argc == 2)
	{
		//+ rajouter des checks
		values = ft_split(argv[1], ' ');
		string = 1;
	}
	else
		values = &argv[1];
	init_stack_a(&a, &b, values, string);
		//tout mettre dans la pile a
		//puis faire un check des doublons et du contenus de chaque element
		//void init_a(t_node **a, t_node **b, char **argv, int string)

	return (0);
}