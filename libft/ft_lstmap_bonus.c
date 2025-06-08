/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:59:10 by vafavard          #+#    #+#             */
/*   Updated: 2025/05/03 16:43:33 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_lst;
	t_list		*new_node;
	void		*new_content;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_lstclear(&new_lst, del), NULL);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>

void *ft_test_f(void *s)
{
	return (ft_strdup((char *)s));
}

void ft_test_del(void *s)
{
	free(s);
}

void ft_dummy_del(void *s)
{
	(void)s;
}

int main(void)
{
	t_list *node1 = ft_lstnew("node1");
	t_list *node2 = ft_lstnew("node2");
	t_list *node3 = ft_lstnew("node3");
	t_list *node4 = ft_lstnew("node4");

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	t_list *test = ft_lstmap(node1, &ft_test_f, &ft_test_del);

	int i = 0;
	t_list *tmp = test;
	while (tmp != NULL)
	{
		printf("test %d: %s\n", i, (char *)tmp->content);
		tmp = tmp->next;
		i++;
	}

	tmp = node1;
	i = 0;
	while (tmp != NULL)
	{
		printf("node1 %d: %s\n", i, (char *)tmp->content);
		tmp = tmp->next;
		i++;
	}

	ft_lstclear(&node1, &ft_dummy_del);
	ft_lstclear(&test, &ft_test_del);
}*/