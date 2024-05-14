#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
		return(i);
}
int check(char c, char *str, int j)
{
	int i = 0;
	while(i < j)
	{
		if(c == str[i])
			return(0);
		i++;
	}
	return(1);
}
int main(int argc, char *argv[])
{
	int i = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			if(check(argv[1][i], argv[1], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while(argv[2][i])
		{
			if(check(argv[2][i], argv[1], ft_strlen(argv[1])) && check(argv[2][i], argv[2], i))
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}