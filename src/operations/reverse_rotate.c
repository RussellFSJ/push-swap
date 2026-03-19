#include "push_swap.h"

void	reverse_rotate(t_list **stack, char *op)
{
	t_list	*last_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last_node = ft_lstlast(stack);
	stack = ft_ls
}