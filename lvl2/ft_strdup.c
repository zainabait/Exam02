#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}
char    *ft_strdup(char *src)
{
	int i = 0;
	char *str;
	str = malloc(ft_strlen(src) + 1);
	if(!str)
		return(NULL);
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}