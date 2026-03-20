#include "push_swap.h"

void	reverse_rotate(t_list **stack, char *op)
{
	t_list	*last_node;
	t_list	*previous_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last_node = *stack;
	previous_node = NULL;
	while (last_node->next)
	{
		previous_node = last_node;
		last_node = last_node->next;
	}
	previous_node->next = NULL;
	ft_lstadd_front(stack, last_node);
	ft_printf("%s\n", op);
}
