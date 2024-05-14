#include <stdio.h>
#include <stdlib.h>
char    *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char c;
	while(str[len])
		len++;
	len--;
	while(i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return(str);
}

int	main(void)
{
	char s[] = "Hello World";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}