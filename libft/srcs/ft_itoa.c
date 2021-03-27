#include "../include/libft.h"

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_digitlen(n);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n == 0)
		return (ft_strcpy(str, "0"));
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
