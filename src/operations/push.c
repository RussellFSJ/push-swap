/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:17:24 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/15 23:26:15 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **src, t_list **dest);

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	ft_printf("pb\n");
}

static void	push(t_list **src, t_list **dest)
{
	t_list	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dest, tmp);
}
