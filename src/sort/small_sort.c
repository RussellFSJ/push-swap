/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:19:41 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/30 20:00:59 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_list **stack);

void	small_sort(t_list **a, t_list **b, size_t stack_size)
{
	if (stack_size < 2)
		return ;
	else if (stack_size == 2)
	{
		if (is_sorted(a))
			return ;
		swap(a, "sa");
		return ;
	}
	else if (stack_size >= 3)
	{
		return ;
	}
}

static void	sort_three(t_list **stack)
{
	
}

