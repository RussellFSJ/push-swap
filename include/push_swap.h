/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:10:34 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/14 02:30:22 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"

// operations
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **b, t_list **a);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

// sort
void	small_sort(t_list **a, t_list **b, size_t stack_size);

// utils
t_list	*build_stack(size_t size, char **nums);
long	ft_atol(const char *nptr);
int		is_sorted(t_list **stack);
int		find_min(t_list **stack);
size_t	find_position(t_list *stack, int value);

// push_swap
void	push_swap(t_list *stack);

#endif