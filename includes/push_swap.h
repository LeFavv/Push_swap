/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 08:02:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/09 14:36:13 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <limits.h>

//lst_func
t_node	*ft_lstnew(void *content);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
t_node	*ft_lstlast(t_node *lst);

//check
int		check_duplicates(t_node *stack, int value);
int		is_valid_number(char *str);
int		ft_isdigit(int c);

long	ft_atol(const char *str);
void	init_stack_a(t_node **a, t_node **b, char **values, int string);

//sort
int	stack_sorted(t_node **stack);


//error - free
int		ft_error(t_node **a, t_node **b, char **values, int string);
void	free_stack(t_node **a);
void	free_split(char **values);
void	ft_free_all(t_node **a, t_node **b, char **values, int string);

//mouvements
//swap
void    swap(t_node **stack);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

//push
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void    push(t_node **stack_one, t_node **stack_two);

//rotate
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

//reverse rotate
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);



typedef struct s_node
{
	int				nbr;
	struct s_node	*next;
}	t_node;

#endif