/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:10:34 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/19 21:19:27 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"

void	push(t_list **src, t_list **dest, char *step);
void	swap(t_list **stack, char *op);
int		add_to_stack(t_list **stack, long *num_arr, long num);
t_list	*build_stack(size_t size, char **nums);
long	ft_atol(const char *nptr);
void	*handle_invalid_stack(long *num_arr, t_list **stack);
int		is_duplicate(size_t last_index, long *num_arr, long num);
int 	is_integer(char *str);
void	push_swap(t_list *stack);

#endif