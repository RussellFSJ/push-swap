/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:29:20 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/23 17:23:36 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	get_arr_size(char **arr);
static void		free_arr(char **arr);

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**arr;
	size_t	arr_size;

	if (argc < 2)
		return (0);
	else
	{
		arr = handle_argv(argc, argv);
		arr_size = get_arr_size(arr);
		if (!arr)
			return (free_arr(arr), 1);
		a = build_stack(arr_size, arr);
		free_arr(arr);
	}
	if (!a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	b = NULL;
	add_index_to_lst(a, arr_size);
	push_swap(&a, &b);
	return (ft_lstclear(&a, free), ft_lstclear(&b, free), 0);
}

static size_t	get_arr_size(char **arr)
{
	size_t	size;

	size = 0;
	while (arr[size])
		size++;
	return (size);
}

static void	free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}
