#include "../include/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst)
	{
		while ((*alst)->next != NULL)
		{
			del((*alst)->content, (*alst)->content_size);
			*alst = (*alst)->next;
		}
		ft_lstdelone(alst, (*del));
	}
}
