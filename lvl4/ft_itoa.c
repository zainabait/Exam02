#include <stdlib.h>

int ft_count(int nbr)
{
	int count = 0;

	if(nbr == 0)
		return(1);
	if(nbr < 0)
		count++;
	while(nbr)
	{
		count++;
		nbr/=10;
	}
	return(count);
}
char	*ft_itoa(int nbr)
{
	int count = ft_count(nbr);
	char *str;

	str = malloc(sizeof(char) * (count + 1));
	if(!str)
		return(NULL);
	if(nbr == 0)
		str[0] = '0';
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
		
	str[count] = '\0';
	while(nbr)
	{
		count--;
		str[count] = nbr % 10 + 48;
		nbr/=10;
	}
	return(str);
}

