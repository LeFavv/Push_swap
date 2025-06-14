/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 08:02:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/13 19:26:09 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <limits.h>
# include "ft_printf.h"

typedef struct s_node
{
	int				nbr;
	int				index;
	struct s_node	*next;
}	t_node;

//lst_func
t_node	*ft_lstnew(int content);
void	ft_lstadd_back(t_node **lst, t_node *new);
t_node	*ft_lstlast(t_node *lst);
void	ft_lstadd_front(t_node **lst, t_node *new);
int		ft_lstsize(t_node *lst);
int		ft_lstsize(t_node *lst);

//check
int		check_duplicates(t_node *stack, int value);
int		is_valid_number(char *str);
int		ft_isdigit(int c);

//utils
long	ft_atol(const char *str);
t_node	*find_max(t_node *stack);
t_node	*find_min(t_node *stack);
void	assign_index(t_node **stack);

//utils2
int		ft_count_word(char const *s, char c);
char	*ft_malloc(char const *s, int start, int end);
char	**ft_split(char const *s, char c);
int		extern_loop(const char *s, int i, char c, int flag);

//stack gest
void	init_stack_a(t_node **a, t_node **b, char **values, int string);

//sort
int		stack_sorted(t_node **stack);
void	send_to(t_node **a, t_node **b);
void	sort_2(t_node **a);
void	sort_3(t_node **a);
void	sort_4(t_node **a, t_node **b);
void	sort_5(t_node **a, t_node **b);

//radix sort
void	radix_sort(t_node **a, t_node **b);

//error - free
int		ft_error(t_node **a, t_node **b, char **values, int string);
void	free_stack(t_node **a);
void	free_split(char **values);
void	ft_free_all(t_node **a, t_node **b, char **values, int string);

//mouvements
//swap
void	swap(t_node **stack);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

//push
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	push(t_node **stack_one, t_node **stack_two);

//rotate
void	rotate(t_node **stack);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

//reverse rotate
void	reverse_rotate(t_node **stack);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

#endif