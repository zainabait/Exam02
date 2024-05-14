#include <unistd.h>

void putnbr(unsigned int n)
{
	char	c;

	if(n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
		
}
int main()
{
	unsigned int	i;

	i = 1;
	while(i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			write(1, "fizzbuzz", 8);
		else if ((i % 3) == 0)
			write(1, "fizz", 4);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}