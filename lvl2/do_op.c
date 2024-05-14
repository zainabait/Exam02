#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int num1 ;
	int num2;
	if(argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if(argv[2][0] == '+')
			printf("%d", num1 + num2);
		if(argv[2][0] == '-')
			printf("%d", num1 - num2);
		if(argv[2][0] == '/')
			printf("%d", num1 / num2);
		if(argv[2][0] == '%')
			printf("%d", num1 % num2);
		if(argv[2][0] == '*')
			printf("%d", num1 * num2);
	}
	printf("\n");
}