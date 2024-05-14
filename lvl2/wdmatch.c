#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
				{
					k++;
					j++;
					break ;
				}
					
				else
					j++;
			}
			i++;
		}
		i = 0;
		while(argv[1][i])
			i++;
		if(k == i)
			write(1, argv[1], i);
	}
	write(1, "\n", 1);
}