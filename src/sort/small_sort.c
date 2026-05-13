/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:19:41 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/14 02:28:43 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void sort_three(t_list **stack);

void small_sort(t_list **a, t_list **b, size_t stack_size)
{
	if (stack_size < 2)
		return;
	else if (stack_size == 2)
	{
		if (is_sorted(a))
			return;
		sa(a);
		return;
	}
	else if (stack_size >= 3)
	{
		sort_three(a);
		return;
	}
}

static void sort_three(t_list **stack)
{
	int i;
	int j;

	i = 0;
	j = 0;
}
