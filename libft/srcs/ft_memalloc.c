#include "../include/libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (!(tmp = malloc(size)))
		return (NULL);
	while (i < size)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
