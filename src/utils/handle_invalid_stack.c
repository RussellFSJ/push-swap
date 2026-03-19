#include "push_swap.h"

void	*handle_invalid_stack(long *num_arr, t_list **stack)
{
	free(num_arr);
	ft_lstclear(stack, free);
	// ft_printf("Error\n");
	return (NULL);
}
