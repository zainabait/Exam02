#include <unistd.h>


int main(int argc, char *argv[])
{

	int i = 0;
	int j = 0;
	if(argc == 2)
	{
		while(argv[1][i])
			i++;
		i--;
		while(argv[1][i])
		{
			while(argv[1][i] != ' ' && argv[1][i])
				i--;
			j = i + 1;
			while(argv[1][j]!= ' ' && argv[1][j])
			{
				write(1, &argv[1][j], 1);
				j++;
			}
			if(argv[1][i] == ' ')
			{
				write(1, " ", 1);
				i--;
			}

		}

	}
	write(1, "\n", 1);
}