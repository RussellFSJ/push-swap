/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:29:20 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/20 21:56:02 by rfoo             ###   ########.fr       */
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

	if (argc < 2)
		return (0);
	else
	{
		arr = handle_argv(argc, argv);
		if (!arr)
			return (free_arr(arr), 1);
		a = build_stack(get_arr_size(arr), arr);
		free_arr(arr);
	}
	if (!a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	b = NULL;
	if (a)
		push_swap(&a, &b);
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	return (0);
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
