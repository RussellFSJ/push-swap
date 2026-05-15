/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:05:27 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/15 21:28:57 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_stack(t_list *stack);

void	push_swap(t_list **a, t_list **b)
{
	size_t	stack_size;

	if (!a || !b || !is_valid_stack(*a) || !is_valid_stack(*b))
	{
		ft_printf("Error\n");
		return ;
	}
	stack_size = get_stack_size(*a);
	if (stack_size <= 5)
		small_sort(a, b, stack_size);
	else
		return ;
	
}

static int	is_valid_stack(t_list *stack)
{
	if (!stack)
	{
		ft_printf("Error\n");
		return (0);
	}
	while (stack)
	{
		if (!ft_isdigit(ft_atoi(stack->content)))
			return (0);
		else
			stack = stack->next;
	}
	return (1);
}
