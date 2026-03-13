/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:34:02 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/13 18:40:45 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	is_integer(char	*number);
// static int	has_duplicates(t_list *stack);

int	is_valid_stack(t_list *stack)
{
	if (!stack)
		return (0);
	while (stack)
	{
		if (!is_int(stack->content))
			return (0);
		stack = stack->next;
	}
	return (1);
}

int is_int(char *str)
{
	int	i;
	int	num;

	if (str == '+' || str == '-')
		i++;
	while (str[i])


	num = ft_atoi(str);
	if (num > INT_MAX || num < INT_MIN)
			return (0);
	return (1);


}