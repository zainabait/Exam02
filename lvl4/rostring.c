#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int c = 0;
	if(argc > 1)
	{
		while(argv[1][i] == '\t' || argv[1][i] == ' ')
			i++;
		while(argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i])
			i++;
		while(argv[1][i] == '\t' || argv[1][i] == ' ')
			i++;
		while(argv[1][i])
		{
			while(argv[1][i] == '\t' || argv[1][i] == ' ')
			{
				c = 1;
				i++;
			}
			if(c == 1 && argv[1][i])
			{
				write(1, " ", 1);
				c = 0;
			}
			while (argv[1][i] && argv[1][i] != '\t' && argv[1][i] != ' ')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if (!argv[1][i])
				write(1, " ", 1);
		}
		i = 0;
		while(argv[1][i] == '\t' || argv[1][i] == ' ')
			i++;
		while(argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
			
	}
	write(1, "\n", 1);
}
