#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len;
	int *res;
	int i = 0;

	if (start > end)
		len = start - end + 1;
	else 
		len = end - start + 1;
	res = malloc(sizeof (int) * len);
	if(!res)
		return(NULL);
	while(len)
	{
		res[i] = end;
		if(end > start)
			end--;
		else
			end++;
		len--;
		i++;
	}
	return(res);
}