/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:19:41 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/14 19:50:45 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_list **stack);

void	small_sort(t_list **a, t_list **b, size_t stack_size)
{
	if (stack_size < 2 || is_sorted(a))
		return ;
	else if (stack_size == 2)
		sa(a);
	else if (stack_size >= 3)
	{
		sort_three(a);
	}
}

static void	sort_three(t_list **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->content;
	second = (*stack)->next->content;
	third = (*stack)->next->next->content;
	
	if (first < second && first < third && second > third)
	{
		sa(stack);
		ra(stack);
	}
	else if (first > second && first < third)
		sa(stack);
	else if (first < second && first > third)
		rra(stack);
	else if (first > second && first > third && second < third)
		ra(stack);
	else if (first > second && second > first)
	{
		sa(stack);
		rra(stack);
	}
}

