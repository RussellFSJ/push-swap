/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:17:44 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/30 17:17:45 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack, char *op)
{
	t_list	*last_node;
	t_list	*previous_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last_node = *stack;
	previous_node = NULL;
	while (last_node->next)
	{
		previous_node = last_node;
		last_node = last_node->next;
	}
	previous_node->next = NULL;
	ft_lstadd_front(stack, last_node);
	ft_printf("%s\n", op);
}
