#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	int i = 2;
	if(n < 2)
		return(0);
	while(i * i < n)
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
	int res = 1;
	int n;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (is_prime(n) || n == 1)
			printf("%d", n);
		else
		{
			while(i <= n)
			{
				if(is_prime(i) && (n % i == 0))
				{
					printf("%d", i);
					n = n / i;
					i = 1;
					if (n > 1)
						printf("*");
				}
				i++;
			}
		}
	
	}
	printf("\n");
}