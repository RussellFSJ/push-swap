/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:34:02 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/19 17:47:44 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_integer(char *str);
static int	is_duplicate(size_t last_index, long *num_arr, long num);
static int	add_to_stack(t_list **stack, long *num_arr, long num);
static void	*handle_invalid_stack(long *num_arr, t_list **stack);

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

static int is_integer(char *str)
{
	int		i;
	long	num;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

static int	is_duplicate(size_t last_index, long *num_arr, long num)
{
	int	i;

	i = 0;
	while (i < last_index)
	{
		if (num == num_arr[i])
			return (1);
		i++;
	}
	return (0);
}

static int	add_to_stack(t_list **stack, long *num_arr, long num)
{
	long *content;
	
	content = malloc(sizeof(long));
	if (!content)
	return (0);
	*content = num;
	ft_lstadd_back(stack, ft_lstnew(content));
	return (1);
}

static void	*handle_invalid_stack(long *num_arr, t_list **stack)
{
	free(num_arr);
	ft_lstclear(stack, free);
	// ft_printf("Error\n");
	return (NULL);
}
