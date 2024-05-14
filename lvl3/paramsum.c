#include <unistd.h>

void putnbr(int nbr)
{
	char c;
	if(nbr >= 0 && nbr <= 9)
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
	else
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
		
}
int main(int argc, char *argv[])
{
	int i = 0;
	i = argc - 1;
	putnbr(i);
	write(1, "\n", 1);
}