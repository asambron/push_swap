#include "../includes/push_swap.h"

void		print_cmd(int value)
{
	if (value == SA)
		ft_putstr("sa\n");
	else if (value == SB)
		ft_putstr("sb\n");
	else if (value == SS)
		ft_putstr("ss\n");
	else if (value == PA)
		ft_putstr("pa\n");
	else if (value == PB)
		ft_putstr("pb\n");
	else if (value == RA)
		ft_putstr("ra\n");
	else if (value == RB)
		ft_putstr("rb\n");
	else if (value == RR)
		ft_putstr("rr\n");
	else if (value == RRA)
		ft_putstr("rra\n");
	else if (value == RRB)
		ft_putstr("rrb\n");
	else if (value == RRR)
		ft_putstr("rrr\n");
}

void		print_mvt(t_move *mvt)
{
	int		i;

	i = 0;
	while (++i <= mvt->nbr_move)
	{
		print_cmd(mvt->move[i]);
	}
}
