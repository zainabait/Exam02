#include <stdlib.h>
#include <stdio.h>
int ft_count(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		while((str[i] == '\t' || str[i]== '\n' || str[i] == ' ') && str[i])
			i++;
		if(str[i] != '\t' && str[i] != '\n' && str[i] != ' '  && str[i])
			count++;
		while(str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
			i++;
	}
	return(count);
}
char ** ft_fill(char **res, char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int start = 0;
	int end ;
	int count = ft_count(str);
	int len;
	while(j < count)
	{
		while(str[i])
		{
			while((str[i] == '\t' || str[i]== '\n' || str[i] == ' ') && str[i])
				i++;
			start = i;
			while(str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
				i++;
			end = i;
			len = end - start;
			res[j] = malloc(sizeof(char) * (len + 1));
			if(!res[j])
				return(NULL);
			while(k < len)
			{
				res[j][k] = str[start];
				k++;
				start++;
			}
			res[j][k] = '\0';
			j++;
			k = 0;
			break;
		}
	}
	res[j] = NULL;
	return(res);
}
char    **ft_split(char *str)
{
	int i = 0;
	int count = ft_count(str);
	char **res;

	res = (char **)malloc(sizeof(char *) *(count + 1));
	if(!res)
		return(NULL);
	res = ft_fill(res, str);
	return(res);
}
