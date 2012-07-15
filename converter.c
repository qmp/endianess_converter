//32 bits endianess converter using gcc builtin
#include <unistd.h>
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

	while(read (0, &temp, 4) > 0)
	{
		__builtin_bswap32(temp);
		write(1, &temp, 4);
	}
	
}
