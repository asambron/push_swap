#include "libft.h"

int		ft_strisdigit_pos_neg(const char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	if (*s == '-' && *s + 1 != '\0')
		s++;
	while (*s != '\0')
	{
		if (ft_isdigit((int)*s) == 0)
			return (0);
		s++;
	}
	return (1);
}
