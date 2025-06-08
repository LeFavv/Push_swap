/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 09:01:42 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/08 14:13:59 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(void *content);
int	ft_isdigit(int c);
void	ft_lstadd_back(t_node **lst, t_node *new);

void	init_stack_a(t_node **a, t_node **b, char **values, int string)
{
	int i;

	i = 0;
	while (values[i])
	{
		t_node	*new;
		long	nbr;
		int		i;
		

		(void)b; //eviter warning compilateur
		i = 0;
		while (values[i])
		{
			//verifier contenu
			//atoi ou atol ?
			//verifier doublons
			//fill stack a
			ft_lstnew();
			if (!new)
				ft_error(a, b, values, string);
			
				//tout free
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