#include "../include/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = ft_strlen(needle);
	if (k == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[j + i])
		{
			if (j == (k - 1))
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
