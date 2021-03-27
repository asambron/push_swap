#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../../libft/include/libft.h"
# include <limits.h>

# define SIZE_CMD 10000
# define VAL_MAX 1000
# define REC 1

typedef struct	s_pile
{
	int			nbr_value;
	int			index;
	int			*value;
	int			min;
	int			max;
}				t_pile;

typedef struct	s_move
{
	int			move[SIZE_CMD];
	int			nbr_move;
	int			shots;
	int			tab[VAL_MAX];
	int			pos;
	int			ra;
	int			rra;
	int			rb;
	int			rrb;
	int			best_shot;
}				t_move;

typedef struct	s_dat
{
	int			rec;
	int			add_move;
}				t_dat;

typedef struct	s_arg
{
	int			ac;
	char		**av;
}				t_arg;

typedef enum	e_val
{
	IF, SA, SB, SS, PA, PB, RA, RB, RR, RRA, RRB, RRR
}				t_val;

void			pile_free(t_pile *pile);
void			ft_error(void);
void			check_argv(int argc, char **argv);
int				check_sort(t_pile *pile);
t_pile			*pile_create(int size, int index, char **str);
t_pile			*ft_create_and_copy(t_pile *pile_src);
void			ft_sort_type_1(t_pile *pile_a, t_pile *pile_b, t_move *mvt);
void			ft_sort_type_2(t_pile *pile_a, t_pile *pile_b, t_move *mvt);
void			ft_sort_type_3(t_pile *pile_a, t_pile *pile_b, t_move *mvt);
void			swap(t_pile *pile);
void			swap_swap(t_pile *pile_a, t_pile *pile_b);
void			push(t_pile *pile_tx, t_pile *pile_rx);
void			rotate(t_pile *pile);
void			rotate_rotate(t_pile *pile_a, t_pile *pile_b);
void			reverse_rotate(t_pile *pile);
void			reverse_rotate_rotate(t_pile *pile_a, t_pile *pile_b);
void			print_cmd(int cmd);
void			print_mvt(t_move *mvt);
void			opti_mvt(t_move *mvt);
void			ft_move(t_pile *pile_a, t_pile *pile_b, t_move *mvt, int real);
void			pile_b_to_pile_a(t_pile *pile_a, t_pile *pile_b, t_move *mvt);
void			min_max(t_pile *pile);
void			tab_shots_init(t_move *mvt);

#endif
