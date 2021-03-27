#include "../include/libft.h"

int	ft_putwchar(wchar_t wc)
{
	int ret;

	ret = 0;
	if (wc <= 0x7F && (ret = 1))
		ft_putchar(wc);
	else if (wc >= 0x80 && wc <= 0x7FF && (ret = 2))
	{
		ft_putchar((wc >> 6) + 0xC0);
		ft_putchar((wc & 0x3F) + 0x80);
	}
	else if (wc >= 0x800 && wc <= 0xFFFF && (ret = 3))
	{
		ft_putchar((wc >> 12) + 0xE0);
		ft_putchar(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar((wc & 0x3F) + 0x80);
	}
	else if (wc >= 0x10000 && wc <= 0x1FFFFF && (ret = 4))
	{
		ft_putchar((wc >> 18) + 0xF0);
		ft_putchar(((wc >> 12) & 0x3F) + 0x80);
		ft_putchar(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar((wc & 0x3F) + 0x80);
	}
	return (ret);
}
