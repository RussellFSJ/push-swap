/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:29:20 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/19 17:19:14 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	get_arr_size(char **arr);
void			free_arr(char **arr);

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**arr;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		arr = ft_split(argv[1], ' ');
		if (!arr)
			return (free_arr(arr), 1);
		a = build_stack(get_arr_size(arr), arr);
		free_arr(arr);
	}
	else
		a = build_stack((size_t)(argc - 1), argv + 1);
	if (!a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	b = NULL;
	if (a)
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

void	free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}
