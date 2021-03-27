#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*begin;

	begin = f(lst);
	new = begin;
	if (new == NULL || lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		begin->next = f(lst);
		if (begin->next == NULL)
			return (NULL);
		begin = begin->next;
	}
	return (new);
}
