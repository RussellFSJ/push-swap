/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:18:03 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/30 19:59:39 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack);

void	ra(t_list **a)
{
	rotate(a);
	ft_printf("ra");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_printf("rb");
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr");
}

static void	rotate(t_list **stack)
{
	t_list	*first_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	*stack = first_node->next;
	first_node->next = NULL;
	ft_lstadd_back(stack, first_node);
}
