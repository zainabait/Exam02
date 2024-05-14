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
int is_prime(int n)
{
	int i = 2;
	while(i*i <= n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return(1);
}
int main(int argc, char *argv[])
{
	int i = 2;
	int sum = 0;
	int num;
	if(argc == 2)
	{
		num = ft_atoi(argv[1]);
		while(i <= num)
		{
			if(is_prime(i))
				sum+= i;
			i++;
		}
		put_num(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}