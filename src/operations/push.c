#include "push_swap.h"

void	push(t_list **src, t_list **dest, char *op)
{
	t_list	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dest, tmp);
	ft_printf("%s\n", op);
}
