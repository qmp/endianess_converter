//32 bits endianess converter using gcc builtin
#include <stdlib.h>
#include <stdio.h>


int main (int argc, char *argv[])
{
	if (argc > 1) 
	{
		printf("usage : %s <infile >outfile", argv[0]);
		exit(1);
	}

	int32_t temp;

	while(fread(&temp, sizeof(temp), 1, stdin) > 0)
	{
		__builtin_bswap32(temp);
		fwrite(&temp, sizeof(temp), 1, stdout);
	}
	
}
