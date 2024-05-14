typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *tmp = begin_list;

	while(tmp)
	{
		(*f)(tmp->data);
		tmp = tmp->next;
	}
}