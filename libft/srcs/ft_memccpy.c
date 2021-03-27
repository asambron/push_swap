#include "../include/libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*tmps;
	unsigned char		*tmpd;
	size_t				i;

	i = 0;
	tmps = src;
	tmpd = dst;
	while (i < n)
	{
		tmpd[i] = tmps[i];
		if (tmps[i] == (unsigned char)c)
		{
			i++;
			return (dst + i);
		}
		i++;
	}
	return (NULL);
}
