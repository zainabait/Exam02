#include <string.h>
#include<stdio.h>
int ft_check(char c, const char *str)
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
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	while(s1[i])
	{
		if(ft_check(s1[i], s2))
			return((char *)(s1 + i));
		i++;
	}
	return(NULL);
}
int main()
{
	printf("%s", ft_strpbrk("hello", "abl"));
}