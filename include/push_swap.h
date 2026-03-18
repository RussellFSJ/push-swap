/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:10:34 by rfoo              #+#    #+#             */
/*   Updated: 2026/03/18 23:00:49 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"

void	push_swap(t_list *stack);
long	ft_atol(const char *nptr);
t_list	*build_stack(size_t size, char **nums);

#endif