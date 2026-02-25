/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:05:27 by russ1337          #+#    #+#             */
/*   Updated: 2026/02/26 02:35:58 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (!ft_isdigit(stack->content)) // doesnt work please fix
			return (0);
		else
			stack = stack->next;
	}
	return (1);
}