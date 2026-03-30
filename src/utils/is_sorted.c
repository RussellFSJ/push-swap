/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:20:10 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/30 18:16:58 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*current_node;

	if (!stack || !*stack)
		return (0);
	current_node = *stack;
	while (current_node->next)
	{
		if (current_node->content > current_node->next->content)
			return (0);
		current_node = current_node->next;
	}
	return (1);
}
