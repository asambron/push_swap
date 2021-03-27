#include "../include/libft.h"

char	*ft_strdup(char *src)
{
	char	*tab;

	if (!(tab = (malloc(ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(tab, src);
	return (tab);
}
