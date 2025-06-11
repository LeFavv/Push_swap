/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 17:24:45 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/11 19:27:42 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_node **lst, t_node *new);
t_node	*ft_lstnew(int content);
void	ft_lstadd_front(t_node **lst, t_node *new);
t_node	*ft_lstlast(t_node *lst);
int		ft_lstsize(t_node *lst);
int		ft_lstsize(t_node *lst);

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

t_node	*ft_lstnew(int content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->nbr = content;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_node	*ft_lstlast(t_node *lst)
{
	t_node	*temp;

	temp = lst;
	if (lst == NULL)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

int	ft_lstsize(t_node *lst)
{
	int		result;
	t_node	*temp;

	result = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		result++;
	}
	return (result);
}

