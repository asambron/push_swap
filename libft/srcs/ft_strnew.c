#include "../include/libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!(tmp = malloc(size + 1)))
		return (NULL);
	while (i <= size)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
