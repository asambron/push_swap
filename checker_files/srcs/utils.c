#include "../includes/checker.h"

static  void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int			*ft_tabrev(int *tab, int size)
{
	int		pos;

	pos= 0;
	while (pos< size)
	{
        ft_swap(tab + pos, tab + size);
		pos++;
		size--;
	}
	return (tab);
}

void		pile_free(t_pile *pile)
{
	free(pile->value);
	free(pile);
}

void		error(void)
{
	ft_putstr("Error\n");
	exit(1);
}
