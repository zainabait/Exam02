unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char  res = 0;
	int i = 8;
	while(i)
	{
		res = (res << 1) | (octet & 1); //  10 00 001000
		octet = octet >> 1; //  000100  00
		i--; // 6
	}
	return(res);

}
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
#include <stdio.h>
int main()
{
	printf("%c", reverse_bits('2'));
}