#include "../include/libft.h"

long		ft_atoi(const char *str)
{
	long i;
	long nb;
	long nega;

	i = 0;
	nb = 0;
	nega = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		nega = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + ((long)str[i] - '0');
		i++;
	}
	return (nb * nega);
}
