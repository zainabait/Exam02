#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp = lst;
	int c;
	while(tmp && tmp->next)
	{
		if(!cmp(tmp->data, tmp->next->data))
		{
			c = tmp->data;
			tmp->data = tmp->next->data;
			tmp->next->data = c;
			tmp = lst;
		}
		else
			tmp = tmp->next;	
			
	}
	return(lst);
}