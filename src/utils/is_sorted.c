/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:20:10 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/19 15:43:44 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*current_node;
	long	current_value;
	long	next_value;

	if (!stack || !*stack)
		return (0);
	current_node = *stack;
	while (current_node->next)
	{
		current_value = *(long *)current_node->content;
		next_value = *(long *)current_node->next->content;
		if (current_value > next_value)
			return (0);
		current_node = current_node->next;
	}
	return (1);
}
