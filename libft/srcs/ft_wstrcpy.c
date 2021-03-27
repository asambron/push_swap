#include "../include/libft.h"

wchar_t	*ft_wstrcpy(wchar_t *wdst, wchar_t *wsrc)
{
	int i;

	i = 0;
	while (wsrc[i] != '\0')
	{
		wdst[i] = wsrc[i];
		i++;
	}
	wdst[i] = '\0';
	return (wdst);
}
