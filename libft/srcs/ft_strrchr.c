#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmps;
	int			i;

	tmps = s;
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	i = ft_strlen(s);
	while (tmps[i] != (char)c)
		i--;
	return ((char *)s + i);
}
