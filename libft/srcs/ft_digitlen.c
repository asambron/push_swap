#include "../include/libft.h"

int		ft_digitlen(int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		n = -n;
		res++;
	}
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}
