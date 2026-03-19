#include "push_swap.h"

void	push(t_list **src, t_list **dest, char *step)
{
	t_list	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
	ft_printf("%s\n", step);
}
