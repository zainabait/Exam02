char ft_lower(char c)
{
	if(c >= 'A' && c <= 'F')
		c+=32;
	return(c);
}

int check_base(char str, int str_base)
{
	
	if(str_base <= 10)
		str_base += 48;
	else
		str_base+= ('a' - 10);
	
	if(ft_lower(str) < str_base)
		return(1);
	return(0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int result = 0;
	int signe = 1;
	if(str[i] == '-')
	{
		i++;
		signe = -1;
	}
		
	while(check_base(str[i], str_base) && str[i])
	{
		if(str_base <= 10 && str[i] >= '0' && str[i] <= '9')
			result = result * str_base + str[i] - 48;
		else if(str_base <= 16)
		{
			if (str[i] >= '0' && str[i] <= '9')
				result = result * str_base + str[i] - 48;
			else if(ft_lower(str[i]) >= 'a' && ft_lower(str[i]) <= 'f')
				result = result * str_base + ft_lower(str[i]) - 'a' + 10;
			else
				break ;
		}
		i++;
	}
	return(result * signe);
	
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("-4", -9));
}