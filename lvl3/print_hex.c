#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++; 
	}
	return(res);
}
void put_hex(int n)
{
	char c;
	if(n >= 0 && n <= 9)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else if(n >= 10 && n < 16)
	{
		c = n - 10 + 'a';
		write(1, &c, 1);
	}
	else
	{
		put_hex(n / 16);
		put_hex(n % 16);
	}
}
int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 2)
		put_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}