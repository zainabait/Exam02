
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = content;
	node->next = NULL;
	return (node);
}
int cmp(void *d1, void *d2)
{
	if(d1 == d2)
		return(0);
	return(1);
}
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if(!begin_list || !*begin_list)
		return ;
	t_list *tmp = *begin_list;
	if (!cmp(data_ref, tmp->data))
	{
		*begin_list = tmp -> next;
		free(tmp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		tmp = *begin_list;
		ft_list_remove_if(&tmp->next, data_ref, cmp);
	}
}
#include<stdio.h>
int main()
{
	t_list *list;
	list = ft_lstnew("1");
	list->next = ft_lstnew("2");
	list->next->next = ft_lstnew("3");

	ft_list_remove_if(&list, "2", cmp);
	while(list)
	{
		printf("%s", list->data);
		list = list->next;
	}

}