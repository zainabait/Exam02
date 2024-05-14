#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int len;
	int *res;
	int i = 0;

	if(start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	res = malloc(sizeof (int) *(len ));
	if (!res)
		return(NULL);
	while(len > 0)
	{
		res[i] = start;
		if(start < end)
			start++;
		else
			start--;
		len--;
		i++;
	}
	return(res);
}
