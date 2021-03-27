#include "../include/libft.h"

size_t	ft_wcharlen(wchar_t c)
{
	int len;

	len = 0;
	if (c >= 0xD800 && c <= 0xDFFF)
		len = -1;
	else if (c <= 0x7F || (c <= 0xFF && MB_CUR_MAX == 1))
		len = 1;
	else if (c <= 0x7FF)
		len = 2;
	else if (c <= 0xFFFF)
		len = 3;
	else if (c <= 0x10FFFF)
		len = 4;
	else
		len = -1;
	return (len);
}
