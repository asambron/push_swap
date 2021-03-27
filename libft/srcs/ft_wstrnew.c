#include "../include/libft.h"

wchar_t		*ft_wstrnew(size_t size)
{
	wchar_t	*wtmp;
	size_t	i;

	i = 0;
	if (!(wtmp = (wchar_t *)malloc(sizeof(wchar_t) * (size + 1))))
		return (NULL);
	while (i <= size)
	{
		wtmp[i] = '\0';
		i++;
	}
	return (wtmp);
}
