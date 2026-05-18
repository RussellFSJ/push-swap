/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 20:09:19 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/18 21:12:46 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_position(t_list *stack, int value)
{
	size_t	position;

	position = 0;
	while (stack)
	{
		if (*(int *)stack->content == value)
			return (position);
		stack = stack->next;
		position++;
	}
	return ((size_t) - 1);
}
