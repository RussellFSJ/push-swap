#include "push_swap.h"

int	is_duplicate(size_t last_index, long *num_arr, long num)
{
	int	i;

	i = 0;
	while (i < last_index)
	{
		if (num == num_arr[i])
			return (1);
		i++;
	}
	return (0);
}
