#include "../includes/push_swap.h"

static  void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

t_pile			*ft_create_and_copy(t_pile *pile_src)
{
	t_pile	*new_pile;
	int		i;

	new_pile = pile_create(pile_src->nbr_value, pile_src->index, NULL);
	i = pile_src->index;
	while (i)
	{
		new_pile->value[i] = pile_src->value[i];
		i--;
	}
	new_pile->min = pile_src->min;
	new_pile->max = pile_src->max;
	return (new_pile);
}

static  int			*ft_tabrev(int *tab, int size)
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

t_pile			*pile_create(int size, int index, char **str)
{
	t_pile	*new_pile;
	int		i;

	i = 0;
	if ((new_pile = (t_pile *)malloc(sizeof(*new_pile))) == NULL)
		exit(-1);
	new_pile->min = INT_MAX;
	new_pile->max = INT_MIN;
	new_pile->nbr_value = size;
	new_pile->index = 0;
	if ((new_pile->value = malloc(sizeof(int) * size)) == NULL)
		exit(-1);
	while (i < new_pile->nbr_value)
	{
		if (str == NULL)
			new_pile->value[i] = 0;
		else
			new_pile->value[i] = atoi(str[i]);
		i++;
	}
	new_pile->index = index;
	ft_tabrev(new_pile->value + 1, new_pile->index - 1);
	min_max(new_pile);
	return (new_pile);
}
