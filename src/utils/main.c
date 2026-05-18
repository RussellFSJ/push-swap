/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:29:20 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/18 20:18:25 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack;

	if (argc < 2)
		return (0);
	stack = build_stack((size_t)(argc - 1), argv + 1);
	if (!stack)
		push_swap(stack);
	return (0);
}
