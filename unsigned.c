#include<stdio.h>

int main()
{
	unsigned int a = -1, d = -1;
	int b, c;

	for(c = 0; c < 32; c++)
	{
		printf("Bits pattern stored for variable a or d is:%d\n", (((0x00000001 << c) & d) > c));
	}	
	printf("%u\n", ++a);
	b = --a;
	printf("%u\n", b);

	return 0;
}
