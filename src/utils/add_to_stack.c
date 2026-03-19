#include "push_swap.h"

int	add_to_stack(t_list **stack, long *num_arr, long num)
{
	long *content;
	
	content = malloc(sizeof(long));
	if (!content)
	return (0);
	*content = num;
	ft_lstadd_back(stack, ft_lstnew(content));
	return (1);
}
