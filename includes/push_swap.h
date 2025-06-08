/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 08:02:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/08 16:00:06 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
#include <limits.h>

t_node	*ft_lstnew(void *content);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_node **lst, t_node *new);
long	ft_atol(const char *str);
int		check_duplicates(t_node *stack, int value);
void	init_stack_a(t_node **a, t_node **b, char **values, int string);
int		is_valid_number(char *str);

//error - free
int		ft_error(t_node **a, t_node **b, char **values, int string);
void	free_stack(t_node **a);
void	free_split(char **values);
void	ft_free_all(t_node **a, t_node **b, char **values, int string);

typedef struct s_node
{
	int				nbr;
	int				index;
	struct s_node	*next;
}	t_node;


#endif