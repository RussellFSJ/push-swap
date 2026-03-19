/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:34:02 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/19 20:47:55 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*build_stack(size_t size, char **nums)
{
	int		i;
	long	num;
	t_list	*stack;
	long	*num_arr;

	i = 0;
	stack = NULL;
	num_arr = malloc(size * sizeof(long));
	if (!num_arr)
		return (NULL);
	while (i < size)
	{
		if (!is_integer(nums[i]))
			return (handle_invalid_stack(num_arr, &stack));
		num = ft_atol(nums[i]);
		if (is_duplicate(i, num_arr, num))
			return (handle_invalid_stack(num_arr, &stack));
		num_arr[i] = num;
		if (!add_to_stack(&stack, num_arr, num))
		return (handle_invalid_stack(num_arr, &stack));
		i++;
	}
	free(num_arr);
	return (stack);
}
