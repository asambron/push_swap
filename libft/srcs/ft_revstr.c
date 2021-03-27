#include "../include/libft.h"

char	*ft_revstr(char *str)
{
	int		i;
	int		length;
	char	*tmp;

	i = -1;
	length = ft_strlen(str);
	if (!(tmp = malloc(length + 1)))
		return (NULL);
	while (length >= 0)
	{
		tmp[++i] = str[--length];
	}
	tmp[i] = '\0';
	return (tmp);
}
