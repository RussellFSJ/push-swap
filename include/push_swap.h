/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:10:34 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/20 21:45:17 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"
# include <stdio.h>

// operations
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

// sort
void	small_sort(t_list **a, t_list **b, size_t stack_size);
void	radix_sort(t_list **a, t_list **b, size_t stack_size);

// utils
void	add_index_to_lst(t_list *stack, size_t stack_size);
t_list	*build_stack(size_t size, char **nums);
int		find_min(t_list *stack);
size_t	find_position(t_list *stack, int value);
long	ft_atol(const char *nptr);
void	ft_swap(int *a, int *b);
size_t	get_stack_size(t_list *stack);
char	**handle_argv(int argc, char **argv);
int		is_sorted(t_list **stack);
void	move_to_top(t_list **stack, int value);

// push_swap
void	push_swap(t_list **a, t_list **b);

#endif