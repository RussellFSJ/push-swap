/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_argv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 20:17:40 by rfoo              #+#    #+#             */
/*   Updated: 2026/05/20 21:43:38 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char		*join_argv(int argc, char **argv);

char	**handle_argv(int argc, char **argv)
{
	char	*joined;
	char	**arr;

	joined = join_argv(argc, argv);
	if (!joined)
		return (NULL);
	arr = ft_split(joined, ' ');
	if (!arr)
		return (NULL);
	free(joined);
	return (arr);
}

static char	*join_argv(int argc, char **argv)
{
	char	*joined;
	char	*temp;
	size_t	index;

	index = 2;
	joined = ft_strdup(argv[1]);
	if (!joined)
		return (NULL);
	while (index < (size_t)argc)
	{
		temp = ft_strjoin(joined, " ");
		free(joined);
		if (!temp)
			return (NULL);
		joined = ft_strjoin(temp, argv[index]);
		free(temp);
		if (!joined)
			return (NULL);
		index++;
	}
	return (joined);
}
