#include "../include/libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tmpd;
	const char	*tmps;
	size_t		n;
	size_t		dstlen;

	tmpd = dst;
	tmps = src;
	n = size;
	while (*tmpd != '\0' && n-- != 0)
		tmpd++;
	dstlen = tmpd - dst;
	n = size - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(src));
	while (*tmps != '\0')
	{
		if (n != 1)
		{
			*tmpd++ = *tmps;
			n--;
		}
		tmps++;
	}
	*tmpd = '\0';
	return (dstlen + (tmps - src));
}
