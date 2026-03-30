/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:18:08 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/30 19:59:48 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack);

void	sa(t_list **a)
{
	swap(a);
	ft_printf("sa");
}

void	sb(t_list **b)
{
	swap(b);
	ft_printf("sb");
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_printf("ss");
}

static void	swap(t_list **stack)
{
	t_list	*first_node;
	t_list	*second_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	second_node = (*stack)->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	*stack = second_node;
}
