#include "../include/libft.h"

char			*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*tmps;
	int			n;

	i = 0;
	tmps = s;
	n = ft_strlen(s);
	while (i <= n)
	{
		if (tmps[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
