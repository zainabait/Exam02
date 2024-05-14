unsigned char	swap_bits(unsigned char octet)
{
	unsigned char res;
	res = octet >> 4 | octet << 4;
	return(res);
}