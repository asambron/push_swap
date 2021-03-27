#include "../include/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tmps;
	size_t	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(tmps = malloc((len + 1) * (sizeof(char)))))
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			tmps[i] = (*f)(s[i]);
			i++;
		}
		tmps[i] = '\0';
	}
	return (tmps);
}
