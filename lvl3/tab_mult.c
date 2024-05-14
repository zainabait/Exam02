#include <unistd.h>

void put_num(int n)
{
	char c;
	if(n >= 0 && n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else
	{
		put_num(n / 10);
		put_num(n % 10);
	}
}
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return(res);
}
int main(int argc,char *argv[])
{
	int i = 1;
	int num;
	if(argc == 2)
	{
		num = ft_atoi(argv[1]);
		while(i <= 9)
		{
			put_num(i);
			write(1, " x ", 3);
			put_num(num);
			write(1, " = ", 3);
			put_num(i * num);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}