/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:19:41 by rfoo              #+#    #+#             */
/*   Updated: 2026/06/04 22:18:31 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_list **stack);
static void	sort_three_to_five(t_list **a, t_list **b, size_t stack_size);

void	small_sort(t_list **a, t_list **b, size_t stack_size)
{
	if (stack_size == 2)
		sa(a);
	else if (stack_size >= 3)
		sort_three_to_five(a, b, stack_size);
}

static void	sort_three(t_list **stack)
{
	int	first;
	int	second;
	int	third;

	first = *(long *)(*stack)->content;
	second = *(long *)(*stack)->next->content;
	third = *(long *)(*stack)->next->next->content;
	if (first > second && second < third && first < third)
		sa(stack);
	else if (first > second && second > third)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < third && first > third)
		ra(stack);
	else if (first < second && second > third && first < third)
	{
		sa(stack);
		ra(stack);
	}
	else if (first < second && second > third && first > third)
		rra(stack);
}

static void	sort_three_to_five(t_list **a, t_list **b, size_t stack_size)
{
	int	min;

	if (stack_size == 3)
		sort_three(a);
	else
	{
		min = find_min(*a);
		move_to_top(a, min);
		pb(a, b);
		small_sort(a, b, stack_size - 1);
		pa(a, b);
	}
}
