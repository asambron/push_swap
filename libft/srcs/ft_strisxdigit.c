#include "libft.h"

int		ft_strisxdigit(const char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (ft_isxdigit((int)*s) == 0)
			return (0);
		s++;
	}
	return (1);
}
