/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:53:00 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/18 22:16:39 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	get_no_of_passes(size_t stack_size);

void	radix_sort(t_list **a, t_list **b, size_t stack_size)
{
	size_t	bit_position;
	size_t	no_of_passes;
	size_t	index;
	int		num;

	bit_position = 0;
	no_of_passes = get_no_of_passes(stack_size);
	while (bit_position < no_of_passes)
	{
		index = 0;
		while (index < stack_size)
		{
			num = *(long *)(*a)->content;
			if (((num >> bit_position) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			index++;
		}
		while (*b)
			pa(a, b);
		bit_position++;
	}
}

static size_t	get_no_of_passes(size_t stack_size)
{
	size_t	max_index;
	size_t	no_of_passes;

	max_index = stack_size - 1;
	no_of_passes = 0;
	while ((max_index >> no_of_passes) != 0)
		no_of_passes++;
	return (no_of_passes);
}
