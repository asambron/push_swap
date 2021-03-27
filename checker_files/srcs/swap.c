#include "../includes/checker.h"

void		swap(t_pile *pile)
{
	int		tmp;
	int		index;

	if (pile->index > 1)
	{
		index = pile->index;
		tmp = pile->value[index];
		pile->value[index] = pile->value[index - 1];
		pile->value[index - 1] = tmp;
	}
}

void		swap_swap(t_pile *pile_a, t_pile *pile_b)
{
	swap(pile_a);
	swap(pile_b);
}
