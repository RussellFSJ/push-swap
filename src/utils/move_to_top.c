/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 20:16:11 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/18 22:16:39 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(t_list **stack, int value)
{
	size_t	size;
	size_t	position;

	size = get_stack_size(*stack);
	position = find_position(*stack, value);
	if (position == ((size_t) - 1))
		return ;
	if (position <= size / 2)
	{
		while (*(long *)(*stack)->content != value)
			ra(stack);
	}
	else
	{
		while (*(long *)(*stack)->content != value)
			rra(stack);
	}
}
