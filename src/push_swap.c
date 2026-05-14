/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:05:27 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/14 15:53:53 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_stack(t_list *stack);

void	push_swap(t_list *stack)
{
	if (!stack)
	{
		ft_printf("Error\n");
		return ;
	}
	while (stack->next)
	{
	}
}

static int	is_valid_stack(t_list *stack)
{
	if (!stack)
	{
		ft_printf("Error\n");
		return (0);
	}
	while (stack)
	{
		if (!ft_isdigit(ft_atoi(stack->content)))
			return (0);
		else
			stack = stack->next;
	}
	return (1);
}
