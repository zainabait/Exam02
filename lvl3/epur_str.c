#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int c = 0;

	if (argc == 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i])
		{
			while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				c = 1;
				i++;
			}
			if(c == 1 && argv[1][i])
			{
				write(1, " ", 1);
				c = 0;
			}
		}		
			
	}
	write(1, "\n", 1);
}