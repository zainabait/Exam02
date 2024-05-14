#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int num1;
	int num2;

	if(argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if(num1 < num2)
			i = num1;
		else
			i = num2;
		while(i)
		{
			if(num1 % i == 0 && num2 % i == 0)
			{
				printf("%d", i);
				break ;
			}
				
			i--;
		}
	}
	printf("\n");
}