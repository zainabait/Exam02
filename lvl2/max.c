int		max(int* tab, unsigned int len)
{
	int res;
	unsigned int i = 0;

	if(len == 0)
		return(0);
	res = tab[0];
	while(i < len)
	{
		if(res < tab[i])
			res = tab[i];
		i++;
	}
	return(res);
}
