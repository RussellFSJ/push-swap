/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index_to_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:27:24 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/23 17:19:06 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*to_array(t_list *stack, size_t stack_size);
static void	sort_array(int *arr, size_t stack_size);
static void	assign_index(t_list *stack, int *arr, size_t stack_size);

void	add_index_to_lst(t_list *stack, size_t stack_size)
{
	int	*arr;

	arr = to_array(stack, stack_size);
	if (!arr)
		return ;
	sort_array(arr, stack_size);
	assign_index(stack, arr, stack_size);
	free(arr);
}

static int	*to_array(t_list *stack, size_t stack_size)
{
	size_t	index;
	int		*arr;

	index = 0;
	arr = malloc(sizeof(int) * stack_size);
	if (!arr)
		return (NULL);
	while (stack)
	{
		arr[index++] = *(long *)stack->content;
		stack = stack->next;
	}
	return (arr);
}

static void	sort_array(int *arr, size_t stack_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < stack_size)
	{
		j = i +1;
		while (j < stack_size)
		{
			if (arr[i] > arr[j])
				ft_swap(&arr[i], &arr[j]);
			j++;
		}
		i++;
	}
}

static void	assign_index(t_list *stack, int *arr, size_t stack_size)
{
	size_t	index;

	while (stack)
	{
		index = 0;
		while (index < stack_size)
		{
			if (*(long *)stack->content == arr[index])
			{
				stack->index = index;
				break ;
			}
			index++;
		}
		stack = stack->next;
	}
}
