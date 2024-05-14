#include <unistd.h>

int find(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				c++;
				break ;
			}
				
			j++;
		}
		i++;
	}
	if(i == c)
		return(1);
	return(0);
}
int main(int argc, char *argv[])
{

	if(argc == 3)
	{
		if(find(argv[1], argv[2]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}