/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:18:03 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/30 17:18:37 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, char *op)
{
	t_list	*first_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	*stack = first_node->next;
	first_node->next = NULL;
	ft_lstadd_back(stack, first_node);
	ft_printf("%s\n", op);
}
