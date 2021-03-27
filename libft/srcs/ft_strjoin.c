#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ad;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((ad = ft_strnew(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	ad = ft_strcpy(ad, s1);
	ad = ft_strcat(ad, s2);
	return (ad);
}
