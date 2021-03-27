#include "../include/libft.h"

void	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n > 2147483647 || n < -2147483648)
		n = 0;
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
