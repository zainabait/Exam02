#include <stdlib.h>

int ft_check(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if(c == str[i])
			return(1);
		i++;
	}
	return(0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	
	while(s[i])
	{
		if(!ft_check(s[i], accept))
			return(i);
		i++;
	}
	return(i);
}