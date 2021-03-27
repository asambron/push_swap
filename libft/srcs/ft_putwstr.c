#include "../include/libft.h"

void	ft_putwstr(wchar_t *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			ft_putwchar(str[i]);
			i++;
		}
	}
}
