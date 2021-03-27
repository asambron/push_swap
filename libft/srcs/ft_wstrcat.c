#include "../include/libft.h"

wchar_t	*ft_wstrcat(wchar_t *ws1, wchar_t *ws2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (ws1[i] != '\0')
	{
		i++;
	}
	while (ws2[j] != '\0')
	{
		ws1[i] = ws2[j];
		i++;
		j++;
	}
	ws1[i] = '\0';
	return (ws1);
}
