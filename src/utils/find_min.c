/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:01:33 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/18 22:16:39 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = *(long *)stack->content;
	while (stack)
	{
		if (*(long *)stack->content < min)
			min = *(long *)stack->content;
		stack = stack->next;
	}
	return (min);
}
